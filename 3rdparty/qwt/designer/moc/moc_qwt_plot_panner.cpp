/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_panner.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot_panner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_panner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotPanner_t {
    uint offsetsAndSizes[10];
    char stringdata0[14];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlotPanner_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlotPanner_t qt_meta_stringdata_QwtPlotPanner = {
    {
        QT_MOC_LITERAL(0, 13),  // "QwtPlotPanner"
        QT_MOC_LITERAL(14, 10),  // "moveCanvas"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 2),  // "dx"
        QT_MOC_LITERAL(29, 2)   // "dy"
    },
    "QwtPlotPanner",
    "moveCanvas",
    "",
    "dx",
    "dy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotPanner[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void QwtPlotPanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlotPanner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveCanvas((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QwtPlotPanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPanner::staticMetaObject>(),
    qt_meta_stringdata_QwtPlotPanner.offsetsAndSizes,
    qt_meta_data_QwtPlotPanner,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlotPanner_t
, QtPrivate::TypeAndForceComplete<QwtPlotPanner, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtPlotPanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotPanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotPanner.stringdata0))
        return static_cast<void*>(this);
    return QwtPanner::qt_metacast(_clname);
}

int QwtPlotPanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPanner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
