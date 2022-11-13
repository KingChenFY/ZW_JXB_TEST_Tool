#include "threadpaint.h"


threadpaint::threadpaint(QObject *parent)
    : QObject{parent}
{

}

void threadpaint::doWork(QCustomPlot * plot) {
    plot->replot();
    /* ... here is the expensive or blocking operation ... */
}
