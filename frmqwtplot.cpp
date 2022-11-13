#include "frmqwtplot.h"
#include "ui_frmqwtplot.h"

frmqwtplot::frmqwtplot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmqwtplot)
{
    ui->setupUi(this);
    initForm();
}

frmqwtplot::~frmqwtplot()
{
    delete ui;
}

void frmqwtplot::initForm()
{
    ui->paper->setTitle("XYZ realtime path");

    curve = new QwtPlotCurve();
    painter = new QwtPlotDirectPainter();
    grid = new QwtPlotGrid();
    symbol = new QwtSymbol( QwtSymbol::Ellipse,
        QBrush( Qt::yellow ), QPen( Qt::red, 2 ), QSize( 8, 8 ) );

    curve->setPen( Qt::blue, 4 ),
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curve->setSymbol( symbol );
    grid->attach( ui->paper );
}

void frmqwtplot::drawDataPoint(const ST_POS_T &pos)
{
//    curve->setSamples( points );
//    painter->drawSeries(&points, points.at(points.size()-1), points.at(points.size()-1));

    points << QPointF( pos.tick, pos.x );
    curve->setSamples( points );
    curve->attach( ui->paper );
    ui->paper->replot();
}
