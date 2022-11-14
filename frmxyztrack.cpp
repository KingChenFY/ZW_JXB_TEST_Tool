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

    ui->wt_xyzPlot->legend->setVisible(true);
    ui->wt_xyzPlot->legend->setFont(QFont("Helvetica", 9));
    ui->wt_xyzPlot->legend->setRowSpacing(-3);

    ui->wt_xyzPlot->addGraph();
    ui->wt_xyzPlot->graph(0)->setPen(QPen(color.at(0)));
    ui->wt_xyzPlot->graph(0)->setScatterStyle(QCPScatterStyle((shapes.at(0)), 2));

    ui->wt_xyzPlot->xAxis->setVisible(true);
    ui->wt_xyzPlot->xAxis->setLabel(QString("时间 us"));
    ui->wt_xyzPlot->yAxis->setLabel(QString("坐标"));

    ui->wt_xyzPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
}

void frmXyzTrack::drawDataPoint(const ST_POS_T &m_xyzCurPos)
{
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
        ui->wt_xyzPlot->graph(0)->data().data()->removeBefore(removekey);
        ui->wt_xyzPlot->xAxis->setRange(removekey, maxkey);
        ui->wt_xyzPlot->graph(0)->rescaleValueAxis(false, true);
    }
    else
    {
        ui->wt_xyzPlot->graph(0)->rescaleAxes();
    }

    ui->wt_xyzPlot->replot(QCustomPlot::rpQueuedReplot);
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

