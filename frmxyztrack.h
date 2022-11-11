#ifndef FRMXYZTRACK_H
#define FRMXYZTRACK_H

#include <QWidget>
#include "head.h"

namespace Ui {
class frmXyzTrack;
}

class frmXyzTrack : public QWidget
{
    Q_OBJECT

public:
    explicit frmXyzTrack(QWidget *parent = nullptr);
    ~frmXyzTrack();

    void drawDataPoint(const ST_POS_T &m_xyzCurPos);
    void clearData();

    bool isPaint;
    int paintDataMax;

private slots:
    void on_btn_pCtrl_clicked();

private:
    Ui::frmXyzTrack *ui;
    void initForm();
};

#endif // FRMXYZTRACK_H
