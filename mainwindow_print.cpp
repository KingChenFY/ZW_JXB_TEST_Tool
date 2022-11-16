#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "quihelperdata.h"
#include "quihelper.h"
#include <QRegularExpression>
#include <QRegExp>

void MainWindow::on_btn_net_p_clicked()
{
    if (!socket_p){
        statusBar()->showMessage(QStringLiteral("Socket构造失败"), 5000);
        return;
    }
    if((ui->combo_ip_p->currentText().isEmpty()) || (ui->combo_port_p->currentText().isEmpty()))
    {
        statusBar()->showMessage(QStringLiteral("未填写ip/端口"), 5000);
        return;
    }
    statusBar()->clearMessage();

    if(net_status_p == false)
    {
        socket_p->connectToHost(ui->combo_ip_p->currentText(),  ui->combo_port_p->currentText().toUInt());
    }
    else
    {
        socket_p->abort();
    }
}

void MainWindow::connected_p()
{
    net_status_p = true;
    ui->btn_net_p->setText("断开主板");
}

void MainWindow::disconnected_p()
{
    net_status_p = false;
    ui->btn_net_p->setText("连接主板");
}

void MainWindow::error_p()
{
    statusBar()->showMessage(socket_p->errorString(), 0);
}

void MainWindow::readData_p()
{
    QByteArray data = socket_p->readAll();
    if (data.length() <= 0) {
        return;
    }
    if(PRINT_PORT == socket_p->peerPort())
    {
        int offset = 0;
        QStringList sl_Pos;
        int index = 0;
        //F[AppTaskXYZPos] L[754]: ##PPOS,X,0,Y,-10271,Z,-9,T745572578##
        QRegularExpression rx("##PPOS,X,(.*?),Y,(.*?),Z,(.*?),T(.*?)##");
        do {
            QRegularExpressionMatch match = rx.match(QString(data), offset);
            if(!match.hasMatch())
                break;

            for(uint8_t i=1; i<5; i++)
            {
                sl_Pos<<match.captured(i);
            }
            offset = match.capturedEnd(4)+2;
            xyzTPos.x = QUIHelperData::strDecimalToDecimal(sl_Pos.at(index++));
            xyzTPos.y = QUIHelperData::strDecimalToDecimal(sl_Pos.at(index++));
            xyzTPos.z = QUIHelperData::strDecimalToDecimal(sl_Pos.at(index++));
            xyzTPos.tick = QUIHelperData::strDecimalToU64(sl_Pos.at(index++));

            if(frmXyz->isPaint)
            {
//                xyzTPos.tick++;//= QUIHelper::getRandValue();
//                xyzTPos.x = QUIHelper::getRandValue(-10000, 23894729, true, true);
                frmXyz->drawDataPoint(xyzTPos);
            }
        }while(1);

        if(isSave)
        {
            QString saveString = QString(data);
            saveData(saveString);
        }
        ui->textBrowser_p->insertPlainText(QString(data));
        ui->textBrowser_p->moveCursor(QTextCursor::End);  //光标自动转到最后一行，设置内容滚动
    }
    else
    {
        qDebug() << "board response parse Err";
    }
}



void MainWindow::on_cb_AllSel_clicked(bool checked)
{
    if(checked)
    {
        ui->cb_net->setChecked(true);
        ui->cb_cpu->setChecked(true);
        ui->cb_p->setChecked(true);
        ui->cb_x->setChecked(true);
        ui->cb_y->setChecked(true);
        ui->cb_z->setChecked(true);
        ui->cb_v->setChecked(true);
        ui->cb_r->setChecked(true);
    }
    else
    {
        ui->cb_net->setChecked(false);
        ui->cb_cpu->setChecked(false);
        ui->cb_p->setChecked(false);
        ui->cb_x->setChecked(false);
        ui->cb_y->setChecked(false);
        ui->cb_z->setChecked(false);
        ui->cb_v->setChecked(false);
        ui->cb_r->setChecked(false);
    }
}


void MainWindow::on_btn_pOpen_clicked()
{
/* 请求：EA 9D 00 0E A2 30 00 01 00 00 00 00 00 00 00 00 35 19 12 06 */
/* 返回：*/
    QByteArray pMsg;
    uint8_t cmdid = emPrintfCmdId_SwitchPrintfAction;
    uint32_t printItem = pActionThread_START;

    if(ui->cb_p->isChecked())
        printItem |= pActionThread_Pos;
    else
        printItem &= ~pActionThread_Pos;

    if(ui->cb_net->checkState())
        printItem |= pActionThread_TCP;
    else
        printItem &= ~pActionThread_TCP;

    if(ui->cb_cpu->checkState())
        printItem |= pActionThread_UsageCPU;
    else
        printItem &= ~pActionThread_UsageCPU;

    if(ui->cb_x->checkState())
        printItem |= pActionThread_X;
    else
        printItem &= ~pActionThread_X;

    if(ui->cb_y->checkState())
        printItem |= pActionThread_Y;
    else
        printItem &= ~pActionThread_Y;

    if(ui->cb_z->checkState())
        printItem |= pActionThread_Z;
    else
        printItem &= ~pActionThread_Z;

    if(ui->cb_v->checkState())
        printItem |= pActionThread_SFScan;
    else
        printItem &= ~pActionThread_SFScan;

    if(ui->cb_r->checkState())
        printItem |= pActionThread_GripRole;
    else
        printItem &= ~pActionThread_GripRole;

    pMsg.append( QUIHelperData::intToByte(printItem) );
    socket_p->write(HardCmd::formatPrintCmd(cmdid, pMsg));
}

void MainWindow::on_btn_pOpen_2_clicked()
{
/* 请求：EA 9D 00 0E A2 30 00 01 00 00 00 00 00 00 00 00 35 19 12 06 */
/* 返回：*/
    QByteArray pMsg;
    uint8_t cmdid = emPrintfCmdId_SelectMCU2;
    uint32_t printItem = MCU2_PRINT_START;

    if(ui->rb_BI->isChecked())
        printItem |= MCU2_PRINT_BI;
    else
        printItem &= ~MCU2_PRINT_BI;

    if(ui->rb_BO->isChecked())
        printItem |= MCU2_PRINT_BO;
    else
        printItem &= ~MCU2_PRINT_BO;

    if(ui->rb_PI->isChecked())
        printItem |= MCU2_PRINT_PI;
    else
        printItem &= ~MCU2_PRINT_PI;

    if(ui->rb_PO->isChecked())
        printItem |= MCU2_PRINT_PO;
    else
        printItem &= ~MCU2_PRINT_PO;

    if(ui->rb_HR->isChecked())
        printItem |= MCU2_PRINT_HR;
    else
        printItem &= ~MCU2_PRINT_HR;

    pMsg.append( QUIHelperData::intToByte(printItem) );
    socket_p->write(HardCmd::formatPrintCmd(cmdid, pMsg));
}

void MainWindow::saveData(QString &tempData)
{
//    QString tempData = ui->txtMain->toPlainText();
//    if (tempData == "") {
//        return;
//    }
    if (saveFileName.isEmpty()) {
        return;
    }
//    QDateTime now = QDateTime::currentDateTime();
//    QString name = now.toString("yyyy-MM-dd-HH-mm-ss");
//    QString fileName = QString("%1/%2.txt").arg(ui->lineEdit_SaveDir->text()).arg(name);

    QString fileName = saveFileName;
    QStringList list = fileName.split(".");
    QString filetype = list.at(list.count() - 1);

    if(filetype == "txt")
    {
        QFile file(fileName);
        file.open(QFile::WriteOnly | QIODevice::Text | QIODevice::Append);
        QTextStream out(&file);
        out << tempData << Qt::endl;
        file.close();
    }
//    on_pushButton_ClearTxtMain_clicked();
}

void MainWindow::on_btn_save_clicked()
{
    if("保存打印" == ui->btn_save->text())
    {
        saveFileName = QFileDialog::getSaveFileName(this, "Save File","",tr("Excel files (*.xlsx);;Text files (*.txt)"));
        if (!saveFileName.isEmpty())
        {
            ui->btn_save->setText("取消保存");
            isSave = true;
        }
        else
            isSave = false;
    }
    else
    {
        ui->btn_save->setText("保存打印");
        isSave = false;
    }
}

void MainWindow::on_btn_pFresh_clicked()
{
    QByteArray pMsg;
    uint8_t cmdid = emPrintfCmdId_RefreshPrint;
    uint8_t printItem = pActionThread_START;

    pMsg.append( QUIHelperData::intToByte(printItem) );
    socket_p->write(HardCmd::formatPrintCmd(cmdid, pMsg));
}

void MainWindow::on_btn_clear_2_clicked()
{
    ui->textBrowser_p->clear();
}
