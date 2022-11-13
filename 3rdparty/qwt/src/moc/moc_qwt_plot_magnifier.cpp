/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_magnifier.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot_magnifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_magnifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotMagnifier_t {
    uint offsetsAndSizes[8];
    char stringdata0[17];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlotMagnifier_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlotMagnifier_t qt_meta_stringdata_QwtPlotMagnifier = {
    {
        QT_MOC_LITERAL(0, 16),  // "QwtPlotMagnifier"
        QT_MOC_LITERAL(17, 7),  // "rescale"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 6)   // "factor"
    },
    "QwtPlotMagnifier",
    "rescale",
    "",
    "factor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotMagnifier[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QwtPlotMagnifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlotMagnifier *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rescale((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QwtPlotMagnifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtMagnifier::staticMetaObject>(),
    qt_meta_stringdata_QwtPlotMagnifier.offsetsAndSizes,
    qt_meta_data_QwtPlotMagnifier,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlotMagnifier_t
, QtPrivate::TypeAndForceComplete<QwtPlotMagnifier, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtPlotMagnifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotMagnifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotMagnifier.stringdata0))
        return static_cast<void*>(this);
    return QwtMagnifier::qt_metacast(_clname);
}

int QwtPlotMagnifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtMagnifier::qt_metacall(_c, _id, _a);
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
