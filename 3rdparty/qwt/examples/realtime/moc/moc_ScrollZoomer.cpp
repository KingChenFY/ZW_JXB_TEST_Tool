/****************************************************************************
** Meta object code from reading C++ file 'ScrollZoomer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qwt-git/examples/realtime/ScrollZoomer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScrollZoomer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScrollZoomer_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[2];
    char stringdata5[4];
    char stringdata6[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScrollZoomer_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ScrollZoomer_t qt_meta_stringdata_ScrollZoomer = {
    {
        QT_MOC_LITERAL(0, 12),  // "ScrollZoomer"
        QT_MOC_LITERAL(13, 14),  // "scrollBarMoved"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(45, 1),  // "o"
        QT_MOC_LITERAL(47, 3),  // "min"
        QT_MOC_LITERAL(51, 3)   // "max"
    },
    "ScrollZoomer",
    "scrollBarMoved",
    "",
    "Qt::Orientation",
    "o",
    "min",
    "max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrollZoomer[] = {

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
       1,    3,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    4,    5,    6,

       0        // eod
};

void ScrollZoomer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrollZoomer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scrollBarMoved((*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject ScrollZoomer::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlotZoomer::staticMetaObject>(),
    qt_meta_stringdata_ScrollZoomer.offsetsAndSizes,
    qt_meta_data_ScrollZoomer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ScrollZoomer_t
, QtPrivate::TypeAndForceComplete<ScrollZoomer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *ScrollZoomer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollZoomer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollZoomer.stringdata0))
        return static_cast<void*>(this);
    return QwtPlotZoomer::qt_metacast(_clname);
}

int ScrollZoomer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlotZoomer::qt_metacall(_c, _id, _a);
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
