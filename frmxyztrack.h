#ifndef FRMXYZTRACK_H
#define FRMXYZTRACK_H

#include <QWidget>
#include "head.h"
#include "threadpaint.h"
#include "ui_frmxyztrack.h"

namespace Ui {
class frmXyzTrack;
}

class frmXyzTrack : public QWidget
{
    Q_OBJECT

    QThread workerThread;

signals:
    void operate(QCustomPlot * plot);


public:
    explicit frmXyzTrack(QWidget *parent = nullptr);
    ~frmXyzTrack();

    void drawDataPoint(const ST_POS_T &m_xyzCurPos);

    bool isPaint;
    int paintDataMax;
    int key;

private slots:
    void on_btn_pCtrl_clicked();

    void on_btn_clear_clicked();

private:
    Ui::frmXyzTrack *ui;
    void initForm();
};

#endif // FRMXYZTRACK_H
