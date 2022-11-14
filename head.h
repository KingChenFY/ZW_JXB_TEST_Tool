#ifndef __HEAD_H_
#define __HEAD_H_

#include <QtCore>
#include <QtGui>
#include <QtNetwork>
#include <qDebug>

#if (QT_VERSION >= QT_VERSION_CHECK(5,0,0))
#include <QtWidgets>
#endif

#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
#include <QtCore5Compat>
#endif

#include "hardcmd.h"
#include "harddef.h"
#include "hardselutedef.h"

//#pragma execution_character_set("utf-8")
#define TIMEMS qPrintable(QTime::currentTime().toString("HH:mm:ss zzz"))
#define STRDATETIME qPrintable(QDateTime::currentDateTime().toString("yyyy-MM-dd-HH-mm-ss"))

typedef struct
{
    int32_t x;
    int32_t y;
    int32_t z;
}ST_POS;

typedef struct
{
    int32_t x;
    int32_t y;
    int32_t z;
   volatile uint64_t tick;
}ST_POS_T;

typedef struct
{
    int32_t xMin;
    int32_t xMax;
    int32_t yMin;
    int32_t yMax;
    int32_t zMin;
    int32_t zMax;
}ST_BORDER_POS;

typedef struct
{
    uint8_t x;
    uint8_t y;
    uint8_t z;
}ST_IS_MOVE;

typedef struct
{
    emTskDXYZType taskType;
    emWorkStatus taskStatus;
    emSeluteDMoveXYZ taskSelute;
    ST_POS aimPos;
    uint32_t useTime;
    ST_POS curPos;
    uint64_t rdTick;
    ST_BORDER_POS xyzBorder;
    ST_IS_MOVE isMove;
    uint16_t pointID;
    uint8_t yInOut;
    uint8_t zUpDown;
    ST_POS startPos;
}ST_XYZ_INFO;

#endif
