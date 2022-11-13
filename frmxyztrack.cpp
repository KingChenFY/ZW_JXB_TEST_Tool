#include "frmxyztrack.h"

frmXyzTrack::frmXyzTrack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmXyzTrack)
{
    ui->setupUi(this);
    isPaint = false;
    key = 0;
    this->initForm();

    threadpaint *worker = new threadpaint;
    worker->moveToThread(&workerThread);
    connect(&workerThread, &QThread::finished, worker, &QObject::deleteLater);
    connect(this, SIGNAL(operate(QCustomPlot *)), worker, SLOT(doWork(QCustomPlot *)));
    workerThread.start();
}

frmXyzTrack::~frmXyzTrack()
{
    workerThread.quit();
    workerThread.wait();

    delete ui;
}

void frmXyzTrack::initForm()
{
    QList<QColor> color;
    color << Qt::red << Qt::green << Qt::blue << Qt::yellow << Qt::black << Qt::gray;

    QVector<QCPScatterStyle::ScatterShape> shapes;
    shapes << QCPScatterStyle::ssDisc ;
    shapes << QCPScatterStyle::ssPlus;
    shapes << QCPScatterStyle::ssCircle;

    ui->wt_xyzPlot->legend->setVisible(true);
    ui->wt_xyzPlot->legend->setFont(QFont("Helvetica", 9));
    ui->wt_xyzPlot->legend->setRowSpacing(-3);

//    ui->wt_xyzPlot->yAxis->setTickLabels(false);
//    connect(ui->wt_xyzPlot->yAxis2, SIGNAL(rangeChanged(QCPRange)), ui->wt_xyzPlot->yAxis, SLOT(setRange(QCPRange))); // left axis only mirrors inner right axis
//    ui->wt_xyzPlot->yAxis2->setVisible(true);
//    ui->wt_xyzPlot->axisRect()->addAxis(QCPAxis::atRight);
//    ui->wt_xyzPlot->axisRect()->addAxis(QCPAxis::atRight);
//    ui->wt_xyzPlot->axisRect()->axis(QCPAxis::atRight, 0)->setPadding(15); // add some padding to have space for tags
//    ui->wt_xyzPlot->axisRect()->axis(QCPAxis::atRight, 1)->setPadding(15);
//    ui->wt_xyzPlot->axisRect()->axis(QCPAxis::atRight, 2)->setPadding(15);

    for(quint8 i = 0; i < 3; i++)
    {
//        ui->wt_xyzPlot->addGraph(ui->customPlot->xAxis, ui->customPlot->axisRect()->axis(QCPAxis::atRight, i));
        ui->wt_xyzPlot->addGraph();
        ui->wt_xyzPlot->graph(i)->setPen(QPen(color.at(i)));
        ui->wt_xyzPlot->graph(i)->setScatterStyle(QCPScatterStyle((shapes.at(i)), 2));
//        ui->wt_xyzPlot->graph(0)->setSmooth(1);
    }
//    ui->wt_xyzPlot->graph(0)->setName(QString("X"));
//    ui->wt_xyzPlot->graph(1)->setName(QString("Y"));
//    ui->wt_xyzPlot->graph(2)->setName(QString("Z"));

//    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
//    timeTicker->setTimeFormat("%h:%m:%s");
//    ui->wt_xyzPlot->xAxis->setTicker(timeTicker);
    ui->wt_xyzPlot->xAxis->setVisible(true);
    ui->wt_xyzPlot->xAxis->setLabel(QString("时间"));

    ui->wt_xyzPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
//    ui->wt_xyzPlot->yAxis->setLabel(QString("坐标"));
//     ui->wt_xyzPlot->axisRect()->setupFullAxesBox();  //设置四轴可见
}

void frmXyzTrack::drawDataPoint(const ST_POS_T &m_xyzCurPos)
{
//    double key = timeStart.msecsTo(QTime::currentTime()) / 1000.0; // time elapsed since start of demo, in seconds
//    double key = QTime::currentTime().msecsSinceStartOfDay()*0.001;

    if(ui->rb_x->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.x);
    else if(ui->rb_y->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.y);
    else if(ui->rb_z->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.z);
    else
        return;

    key++;
    int dataCount = ui->wt_xyzPlot->graph(0)->dataCount();
    qDebug() << key << dataCount << m_xyzCurPos.tick << m_xyzCurPos.x << Qt::endl;
    if(dataCount > paintDataMax)
    {
        double removekey = ui->wt_xyzPlot->graph(0)->data()->at(1)->key;
        double maxkey = m_xyzCurPos.tick;
//        qDebug() << "st: " << removekey <<"ed: "<< maxkey<< Qt::endl;
        ui->wt_xyzPlot->graph(0)->data().data()->removeBefore(removekey);
//        qDebug() << "##" << ui->wt_xyzPlot->graph(0)->dataCount() << Qt::endl;
//        for(uint8_t i=0; i<ui->wt_xyzPlot->graph(0)->dataCount(); i++)
//            qDebug() << ui->wt_xyzPlot->graph(0)->data()->at(i)->key;
//        qDebug() << Qt::endl;
        ui->wt_xyzPlot->xAxis->setRange(removekey, maxkey);
        ui->wt_xyzPlot->graph(0)->rescaleValueAxis(false, true);
    }
    else
    {
        ui->wt_xyzPlot->graph(0)->rescaleAxes();
    }

    ui->wt_xyzPlot->replot(QCustomPlot::rpQueuedReplot);
//    emit operate(ui->wt_xyzPlot);
}

void frmXyzTrack::clearData()
{
    ui->wt_xyzPlot->graph(0)->data().data()->clear();
//    for(quint8 i = 0; i < 6; i++)
//    {
//        ui->wt_xyzPlot->graph(i)->data().data()->clear();
//    }
    ui->wt_xyzPlot->replot();
}


void frmXyzTrack::on_btn_pCtrl_clicked()
{
    if("开始绘图" == ui->btn_pCtrl->text())
    {
        emit on_btn_clear_clicked();
        paintDataMax = ui->sp_dnum->value();
        isPaint = true;
        ui->btn_pCtrl->setText("停止绘图");
    }
    else
    {
        isPaint = false;
        ui->btn_pCtrl->setText("开始绘图");
    }

}


void frmXyzTrack::on_btn_clear_clicked()
{
    //复位数据
    key = 0;
    //清空数据及复位坐标轴范围
    ui->wt_xyzPlot->graph(0)->data().data()->clear();
    ui->wt_xyzPlot->xAxis->setRange(0, paintDataMax);
    ui->wt_xyzPlot->replot();
}

