/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_canvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot_canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotCanvas_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[11];
    char stringdata5[13];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlotCanvas_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlotCanvas_t qt_meta_stringdata_QwtPlotCanvas = {
    {
        QT_MOC_LITERAL(0, 13),  // "QwtPlotCanvas"
        QT_MOC_LITERAL(14, 6),  // "replot"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 22),  // "invalidateBackingStore"
        QT_MOC_LITERAL(45, 10),  // "borderPath"
        QT_MOC_LITERAL(56, 12),  // "QPainterPath"
        QT_MOC_LITERAL(69, 12)   // "borderRadius"
    },
    "QwtPlotCanvas",
    "replot",
    "",
    "invalidateBackingStore",
    "borderPath",
    "QPainterPath",
    "borderRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotCanvas[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x02,    3 /* Public */,
       4,    1,   34,    2, 0x102,    4 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    0x80000000 | 5, QMetaType::QRect,    2,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtPlotCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlotCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->replot(); break;
        case 1: _t->invalidateBackingStore(); break;
        case 2: { QPainterPath _r = _t->borderPath((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtPlotCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->borderRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtPlotCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtPlotCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QwtPlotCanvas.offsetsAndSizes,
    qt_meta_data_QwtPlotCanvas,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlotCanvas_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QwtPlotCanvas, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPainterPath, std::false_type>, QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>

>,
    nullptr
} };


const QMetaObject *QwtPlotCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotCanvas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QwtPlotAbstractCanvas"))
        return static_cast< QwtPlotAbstractCanvas*>(this);
    return QFrame::qt_metacast(_clname);
}

int QwtPlotCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
