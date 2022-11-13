QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
#不加QT += core5compat，会报__imp__ZN7QRegExpD1Ev一连串错误，原因待查
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat

CONFIG += c++17
CONFIG += warn_off
CONFIG += resources_big

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    frmxyztrack.cpp \
#    frmqwtplot.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow_print.cpp \
    threadpaint.cpp

HEADERS += \
    frmxyztrack.h \
#    frmqwtplot.h \
    mainwindow.h \
    head.h \
    threadpaint.h

FORMS += \
    frmxyztrack.ui \
#    frmqwtplot.ui \
    mainwindow.ui

INCLUDEPATH += $$PWD/unit
INCLUDEPATH += $$PWD/hardshare

include ($$PWD/unit/unit.pri)
include ($$PWD/hardshare/hardshare.pri)

#INCLUDEPATH += $$PWD/3rdparty/qtxlsx
INCLUDEPATH += $$PWD/3rdparty/qcustomplot
include ($$PWD/3rdparty/3rd_party.pri)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS = title.ico

RESOURCES += \
    res.qrc

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/3rdparty/qwt/lib/ -lqwt
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/3rdparty/qwt/lib/ -lqwtd
#else:unix: LIBS += -L$$PWD/3rdparty/qwt/lib/ -lqwt

#INCLUDEPATH += $$PWD/3rdparty/qwt/inc
#DEPENDPATH += $$PWD/3rdparty/qwt/inc
