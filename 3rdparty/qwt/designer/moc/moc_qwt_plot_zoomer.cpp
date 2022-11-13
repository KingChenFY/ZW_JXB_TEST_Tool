/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_zoomer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot_zoomer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_zoomer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotZoomer_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[7];
    char stringdata5[3];
    char stringdata6[3];
    char stringdata7[7];
    char stringdata8[5];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlotZoomer_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlotZoomer_t qt_meta_stringdata_QwtPlotZoomer = {
    {
        QT_MOC_LITERAL(0, 13),  // "QwtPlotZoomer"
        QT_MOC_LITERAL(14, 6),  // "zoomed"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 4),  // "rect"
        QT_MOC_LITERAL(27, 6),  // "moveBy"
        QT_MOC_LITERAL(34, 2),  // "dx"
        QT_MOC_LITERAL(37, 2),  // "dy"
        QT_MOC_LITERAL(40, 6),  // "moveTo"
        QT_MOC_LITERAL(47, 4),  // "zoom"
        QT_MOC_LITERAL(52, 6)   // "offset"
    },
    "QwtPlotZoomer",
    "zoomed",
    "",
    "rect",
    "moveBy",
    "dx",
    "dy",
    "moveTo",
    "zoom",
    "offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotZoomer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   47,    2, 0x0a,    3 /* Public */,
       7,    1,   52,    2, 0x0a,    6 /* Public */,
       8,    1,   55,    2, 0x0a,    8 /* Public */,
       8,    1,   58,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void QwtPlotZoomer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlotZoomer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomed((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 1: _t->moveBy((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 2: _t->moveTo((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 3: _t->zoom((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 4: _t->zoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtPlotZoomer::*)(const QRectF & );
            if (_t _q_method = &QwtPlotZoomer::zoomed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QwtPlotZoomer::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlotPicker::staticMetaObject>(),
    qt_meta_stringdata_QwtPlotZoomer.offsetsAndSizes,
    qt_meta_data_QwtPlotZoomer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlotZoomer_t
, QtPrivate::TypeAndForceComplete<QwtPlotZoomer, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtPlotZoomer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotZoomer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotZoomer.stringdata0))
        return static_cast<void*>(this);
    return QwtPlotPicker::qt_metacast(_clname);
}

int QwtPlotZoomer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlotPicker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QwtPlotZoomer::zoomed(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
