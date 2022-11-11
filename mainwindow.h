#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QTcpSocket>
#include <QFileDialog>
#include <QThread>

#include "head.h"
#include "frmxyztrack.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#define ZW_PACKET_MAX_BYTES 992

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public:
    QThread iapThread;
    bool isSave;
    QString saveFileName;
    void saveData(QString &tempData);
    frmXyzTrack *frmXyz;

    //打印轨迹用到数据
    ST_POS_T xyzTPos;

private:
    QTcpSocket *socket;
    bool net_status = false;
    ST_XYZ_INFO xyzInfo;
    uint8_t axisSelect;
    uint8_t isTestRun;

    //打印端口
    QTcpSocket *socket_p;
    bool net_status_p = false;

private slots:
    //测试socket
    void connected();
    void disconnected();
    void error();
    void readData();
    //打印socket
    void connected_p();
    void disconnected_p();
    void error_p();
    void readData_p();
    //测试slot
    void on_btn_net_clicked();
    void getXYZInformaton();
    void setXYZMergetaskRun();
    void setXYZMergetaskStop();
    void on_btn_xtest_clicked();
    void on_btn_ytest_clicked();
    void on_btn_ztest_clicked();
    void on_btn_switch_clicked();
    void on_btn_clear_clicked();
    //打印slot
    void on_btn_net_p_clicked();
    void on_btn_pOpen_clicked();
    void on_btn_save_clicked();
    void on_btn_pFresh_clicked();
    void on_btn_clear_2_clicked();

signals:
    void getXYZInfo();
    void setXYZRun();
    void setXYZStop();
};

#endif // MAINWINDOW_H
