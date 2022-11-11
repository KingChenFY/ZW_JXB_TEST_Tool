#include "frmxyztrack.h"
#include "ui_frmxyztrack.h"

frmXyzTrack::frmXyzTrack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmXyzTrack)
{
    ui->setupUi(this);
    isPaint = false;
    this->initForm();
}

frmXyzTrack::~frmXyzTrack()
{
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
    }
//    ui->wt_xyzPlot->graph(0)->setName(QString("X"));
//    ui->wt_xyzPlot->graph(1)->setName(QString("Y"));
//    ui->wt_xyzPlot->graph(2)->setName(QString("Z"));

//    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
//    timeTicker->setTimeFormat("%h:%m:%s");
//    ui->wt_xyzPlot->xAxis->setTicker(timeTicker);
    ui->wt_xyzPlot->xAxis->setVisible(true);
    ui->wt_xyzPlot->xAxis->setLabel(QString("时间"));
//    ui->wt_xyzPlot->yAxis->setLabel(QString("坐标"));
//     ui->wt_xyzPlot->axisRect()->setupFullAxesBox();  //设置四轴可见
}

void frmXyzTrack::drawDataPoint(const ST_POS_T &m_xyzCurPos)
{
//    double key = timeStart.msecsTo(QTime::currentTime()) / 1000.0; // time elapsed since start of demo, in seconds
//    double key = QTime::currentTime().msecsSinceStartOfDay()*0.001;

    if(ui->wt_xyzPlot->graph(0)->dataCount() > paintDataMax)
        ui->wt_xyzPlot->graph(0)->data().data()->clear();

    if(ui->rb_x->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.x);
    else if(ui->rb_y->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.y);
    else if(ui->rb_z->isChecked())
        ui->wt_xyzPlot->graph(0)->addData(m_xyzCurPos.tick, m_xyzCurPos.z);
    else
        return;
    // make key axis range scroll with the data (at a constant range size of 8):
//    ui->customPlot->xAxis->setRange(key, 8, Qt::AlignRight);

    ui->wt_xyzPlot->graph(0)->rescaleAxes();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
//    for(quint8 i = 1; i < 3; i++) {
//        ui->wt_xyzPlot->graph(i)->rescaleAxes(true);
//    }
    // Note: we could have also just called customPlot->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    ui->wt_xyzPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

//    ui->customPlot->graph(0)->rescaleValueAxis(false, true);
//    ui->customPlot->graph(0)->rescaleKeyAxis();
//    for(quint8 i = 1; i < sensorNum; i++)
//    {
//        ui->customPlot->graph(i)->rescaleValueAxis(true, true);
//        ui->customPlot->graph(i)->rescaleKeyAxis();
//    }
    ui->wt_xyzPlot->replot();
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
        clearData();
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

