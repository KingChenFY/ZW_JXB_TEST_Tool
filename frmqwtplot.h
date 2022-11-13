#ifndef FRMQWTPLOT_H
#define FRMQWTPLOT_H

#include <QWidget>
#include "head.h"
#include "qwt_plot_curve.h"
#include "qwt_symbol.h"
#include "qwt_plot_grid.h"
#include <qwt_plot_directpainter.h>


namespace Ui {
class frmqwtplot;
}

class frmqwtplot : public QWidget
{
    Q_OBJECT

public:
    explicit frmqwtplot(QWidget *parent = nullptr);
    ~frmqwtplot();

//    void drawDataPoint(const ST_POS_T &m_xyzCurPos);
//    void clearData();

    QwtPlotCurve* curve;
    QwtPlotGrid* grid;
    QwtSymbol* symbol;
    QwtPlotDirectPainter *painter;
    QPolygonF points;

    bool isPaint;
    int paintDataMax;

    void drawDataPoint(const ST_POS_T &pos);

private slots:
//    void on_btn_pCtrl_clicked();

private:
    Ui::frmqwtplot *ui;
    void initForm();
};

#endif // FRMQWTPLOT_H
