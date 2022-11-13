#ifndef THREADPAINT_H
#define THREADPAINT_H

#include <QObject>
#include "qcustomplot.h"

class threadpaint : public QObject
{
    Q_OBJECT
public:
    explicit threadpaint(QObject *parent = nullptr);

public slots:
    void doWork(QCustomPlot * plot);

};

#endif // THREADPAINT_H
