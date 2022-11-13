/**************************************************************************************************
 * Author:  ChenFeiyang
 * Date:    2022-8-21
 * SoftName:智微Morphogo固件升级平台
 * Version: 202208231339
 * ************************************************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "quihelperdata.h"
#include <winsock.h>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    xyzTPos.tick = 120;
    xyzTPos.x = 0;
    netRevCnt = 0;

    frmXyz = new frmXyzTrack;
    ui->tabWidget_Print->addTab(frmXyz, "轨迹曲线");
//    frmXyz = new frmqwtplot;
//    ui->tabWidget_Print->addTab(frmXyz, "轨迹曲线");

    connect(this, SIGNAL(getXYZInfo()), this, SLOT(getXYZInformaton()));
    connect(this, SIGNAL(setXYZRun()), this, SLOT(setXYZMergetaskRun()));
    connect(this, SIGNAL(setXYZStop()), this, SLOT(setXYZMergetaskStop()));

    //实例化Socket对象并绑定网络信号槽
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readData()));
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
    connect(socket, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(error()));
#else
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(error()));
#endif

    //实例化Socket对象并绑定网络信号槽
    socket_p = new QTcpSocket(this);
    connect(socket_p, SIGNAL(connected()), this, SLOT(connected_p()));
    connect(socket_p, SIGNAL(disconnected()), this, SLOT(disconnected_p()));
    connect(socket_p, SIGNAL(readyRead()), this, SLOT(readData_p()));
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
    connect(socket_p, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(error_p()));
#else
    connect(socket_p, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(error_p()));
#endif

    //Ui配置
//    setFixedSize ( 920, 520 );
    setWindowTitle(QStringLiteral("智微Morphogo测试平台V1.0"));
    ui->combo_ip->addItem("10.10.10.150");
    ui->combo_ip->addItem("171.16.100.225");
    ui->combo_ip_p->addItem("10.10.10.150");
    ui->combo_ip_p->addItem("171.16.100.225");
    ui->combo_ip_p->addItem("192.168.182.1");
//    QStringList printItem;
//    printItem << "Print_List" << "Print_TCP" << "Print_UsageCPU"
//              << "Print_X" << "Print_Y" << "Print_Z" << "Print_SFScan";
    ui->combo_port->addItem("8888");
    ui->combo_port_p->addItem("8889");
//    ui->combo_pSel->addItems(printItem);
    ui->statusBar->showMessage(QStringLiteral("就绪"), 1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_net_clicked()
{
    if (!socket){
        statusBar()->showMessage(QStringLiteral("Socket构造失败"), 5000);
        return;
    }
    if((ui->combo_ip->currentText().isEmpty()) || (ui->combo_port->currentText().isEmpty()))
    {
        statusBar()->showMessage(QStringLiteral("未填写ip/端口"), 5000);
        return;
    }
    statusBar()->clearMessage();

    if(net_status == false)
    {
        socket->connectToHost(ui->combo_ip->currentText(),  ui->combo_port->currentText().toUInt());
    }
    else
    {
        socket->abort();
    }
}

void MainWindow::connected()
{
    net_status = true;
    ui->btn_net->setText("断开主板");
}

void MainWindow::disconnected()
{
    net_status = false;
    ui->btn_net->setText("连接主板");
}

void MainWindow::error()
{
    statusBar()->showMessage(socket->errorString(), 0);
}

void MainWindow::readData()
{
    netRevCnt++;
    qDebug() << netRevCnt << Qt::endl;
    QByteArray data = socket->readAll();
    if (data.length() <= 0) {
        return;
    }
    quint8 cmdid;
    QByteArray cmdcontent;
    if((PC_PORT == socket->peerPort()) && (HardCmd::parseBoardResponse(data, cmdid, cmdcontent)))
    {
        if(EnumBoardId_setXYZTask == cmdid)
        {
            emit getXYZInfo();
            return;
        }
        if(EnumBoardId_getXYZTaskInfo == cmdid)
        {
            uint8_t i = 0;
            xyzInfo.taskType = (emTskDXYZType)cmdcontent[i++];
            xyzInfo.taskStatus = (emWorkStatus)cmdcontent[i++];
            xyzInfo.taskSelute = (emSeluteDMoveXYZ)cmdcontent[i++];
            xyzInfo.aimPos.x = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.aimPos.y = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.aimPos.y = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.useTime = QUIHelperData::byteToUInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.curPos.x = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.curPos.y = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.curPos.z = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            i += 8;
            xyzInfo.xyzBorder.xMin = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.xyzBorder.xMax = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.xyzBorder.yMin = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.xyzBorder.yMax = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.xyzBorder.zMin = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.xyzBorder.zMax = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.isMove.x = cmdcontent[i++];
            xyzInfo.isMove.y = cmdcontent[i++];
            xyzInfo.isMove.z = cmdcontent[i++];
            xyzInfo.pointID = QUIHelperData::byteToUShort(cmdcontent.mid(i));
            i += 2;
            xyzInfo.yInOut = cmdcontent[i++];
            xyzInfo.zUpDown = cmdcontent[i++];
            xyzInfo.startPos.x = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.startPos.y = QUIHelperData::byteToInt(cmdcontent.mid(i));
            i += 4;
            xyzInfo.startPos.z = QUIHelperData::byteToInt(cmdcontent.mid(i));
            if((emWorkStatus_finish == xyzInfo.taskStatus) && (emSeluteDMoveXYZ_NoErr == xyzInfo.taskSelute))
            {
                ui->textBrowser->insertPlainText(tr("taskSelute:%1\n").arg(QString::number(xyzInfo.taskSelute)));
                if(isTestRun)
                    emit setXYZRun();
                return;
            }
            else
            {
                if((emSeluteDMoveXYZ_NoErr != xyzInfo.taskSelute) && (emSeluteDMoveXYZ_Outtime != xyzInfo.taskSelute))
                    ui->textBrowser->insertPlainText(tr("taskSelute:%1\n").arg(QString::number(xyzInfo.taskSelute)));
                emit getXYZInfo();
                return;
            }    
        }
    }
    else
    {
        qDebug() << "board response parse Err";
    }
}

void MainWindow::setXYZMergetaskRun()
{
/* 请求：eTskType(U8 emTskDXYZType) + PosX(I32) + PosY(I32) + PosZ(I32) + Time(U32 ms)+ id(U16) + PosXStart(I32) + PosYStart(I32) + PosZStart(I32)*/
/* 返回：*/
    QByteArray pMsg;
    int32_t xSetPos, ySetPos, zSetPos;
    int32_t xStPos = 0;
    int32_t yStPos = 0;
    int32_t zStPos = 0;
    emTskDXYZType xTaskType = (emTskDXYZType)(QRandomGenerator::global()->bounded(emTskDXYZType_move, emTskDXYZType_moveTogether));
    uint32_t setMsTime = (emTskDXYZType)(QRandomGenerator::global()->bounded(100, 20000));
    if(0 == axisSelect)
    {
        xSetPos = QRandomGenerator::global()->bounded(xyzInfo.xyzBorder.xMin, xyzInfo.xyzBorder.xMax);
        ui->textBrowser->insertPlainText( tr("Axis[X], Type:%1\tAimPos:%2\tT:%3\n").arg(QString::number(xTaskType), QString::number(xSetPos), QString::number(setMsTime)) );
        ySetPos = NO_MOVE;
        zSetPos = NO_MOVE;
    }
    else if(1 == axisSelect)
    {
        xSetPos = NO_MOVE;
        ySetPos = QRandomGenerator::global()->bounded(xyzInfo.xyzBorder.yMax, xyzInfo.xyzBorder.yMin);
        ui->textBrowser->insertPlainText( tr("Axis[Y], Type:%1\tAimPos:%2\tT:%3\n").arg(QString::number(xTaskType), QString::number(ySetPos), QString::number(setMsTime)) );
        zSetPos = NO_MOVE;
    }
    else
    {
        xSetPos = NO_MOVE;
        ySetPos = NO_MOVE;
        zSetPos = QRandomGenerator::global()->bounded(xyzInfo.xyzBorder.zMax, xyzInfo.xyzBorder.zMin);
        ui->textBrowser->insertPlainText( tr("Axis[Z], Type:%1\tAimPos:%2\tT:%3\n").arg(QString::number(xTaskType), QString::number(zSetPos), QString::number(setMsTime)) );
    }
    pMsg.append( (uint8_t)xTaskType );
    pMsg.append( QUIHelperData::intToByte(xSetPos) );
    pMsg.append( QUIHelperData::intToByte(ySetPos) );
    pMsg.append( QUIHelperData::intToByte(zSetPos) );
    pMsg.append( QUIHelperData::intToByte(setMsTime) );
    pMsg.append( QUIHelperData::ushortToByte(0) );
    pMsg.append( QUIHelperData::intToByte(xStPos) );
    pMsg.append( QUIHelperData::intToByte(yStPos) );
    pMsg.append( QUIHelperData::intToByte(zStPos) );
    socket->write(HardCmd::formatBoardCmd(EnumBoardId_setXYZTask, pMsg));
}

void MainWindow::setXYZMergetaskStop()
{
/* 请求：eTskType(U8 emTskDXYZType) + PosX(I32) + PosY(I32) + PosZ(I32) + Time(U32 ms)+ id(U16) + PosXStart(I32) + PosYStart(I32) + PosZStart(I32)*/
/* 返回：*/
    QByteArray pMsg;
    int32_t xSetPos, ySetPos, zSetPos;
    int32_t xStPos = 0;
    int32_t yStPos = 0;
    int32_t zStPos = 0;
    emTskDXYZType xTaskType = emTskDXYZType_stop;
    xSetPos = NO_MOVE;
    ySetPos = NO_MOVE;
    zSetPos = NO_MOVE;
    uint32_t setMsTime = 0;
    pMsg.append( (uint8_t)xTaskType );
    pMsg.append( QUIHelperData::intToByte(xSetPos) );
    pMsg.append( QUIHelperData::intToByte(ySetPos) );
    pMsg.append( QUIHelperData::intToByte(zSetPos) );
    pMsg.append( QUIHelperData::intToByte(setMsTime) );
    pMsg.append( QUIHelperData::ushortToByte(0) );
    pMsg.append( QUIHelperData::intToByte(xStPos) );
    pMsg.append( QUIHelperData::intToByte(yStPos) );
    pMsg.append( QUIHelperData::intToByte(zStPos) );
    socket->write(HardCmd::formatBoardCmd(EnumBoardId_setXYZTask, pMsg));
}

void MainWindow::getXYZInformaton()
{
    /*pMsg 内容：空 */
    /*pReturnMsg 内容：curBlock(U16)+ isFinsh(U8)*/
    QByteArray pMsg;
    socket->write(HardCmd::formatBoardCmd(EnumBoardId_getXYZTaskInfo, pMsg));
}

void MainWindow::on_btn_xtest_clicked()
{
/* 请求：eTskType(U8 emTskDXYZType) + PosX(I32) + PosY(I32) + PosZ(I32) + Time(U32 ms)+ id(U16) + PosXStart(I32) + PosYStart(I32) + PosZStart(I32)*/
/* 返回：*/
    if(!net_status)
    {
        QMessageBox::information(this, tr("开始更新主板"), tr("主板未连接！"));
        return;
    }
    axisSelect = 0;
}

void MainWindow::on_btn_ytest_clicked()
{
/* 请求：eTskType(U8 emTskDXYZType) + PosX(I32) + PosY(I32) + PosZ(I32) + Time(U32 ms)+ id(U16) + PosXStart(I32) + PosYStart(I32) + PosZStart(I32)*/
/* 返回：*/
    if(!net_status)
    {
        QMessageBox::information(this, tr("开始更新主板"), tr("主板未连接！"));
        return;
    }
    axisSelect = 1;
}

void MainWindow::on_btn_ztest_clicked()
{
/* 请求：eTskType(U8 emTskDXYZType) + PosX(I32) + PosY(I32) + PosZ(I32) + Time(U32 ms)+ id(U16) + PosXStart(I32) + PosYStart(I32) + PosZStart(I32)*/
/* 返回：*/
    if(!net_status)
    {
        QMessageBox::information(this, tr("开始更新主板"), tr("主板未连接！"));
        return;
    }
    axisSelect = 2;
}

void MainWindow::on_btn_switch_clicked()
{
    if("开始测试" == ui->btn_switch->text())
    {
        ui->btn_switch->setText("停止测试");
        isTestRun = 1;
        emit getXYZInfo();
    }
    else
    {
        ui->btn_switch->setText("开始测试");
        isTestRun = 0;
        emit setXYZStop();
    }
}

void MainWindow::on_btn_clear_clicked()
{
    ui->textBrowser->clear();
}
