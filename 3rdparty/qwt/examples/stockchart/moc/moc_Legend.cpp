/****************************************************************************
** Meta object code from reading C++ file 'Legend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qwt-git/examples/stockchart/Legend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Legend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Legend_t {
    uint offsetsAndSizes[22];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[9];
    char stringdata5[3];
    char stringdata6[6];
    char stringdata7[13];
    char stringdata8[21];
    char stringdata9[12];
    char stringdata10[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Legend_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Legend_t qt_meta_stringdata_Legend = {
    {
        QT_MOC_LITERAL(0, 6),  // "Legend"
        QT_MOC_LITERAL(7, 7),  // "checked"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 12),  // "QwtPlotItem*"
        QT_MOC_LITERAL(29, 8),  // "plotItem"
        QT_MOC_LITERAL(38, 2),  // "on"
        QT_MOC_LITERAL(41, 5),  // "index"
        QT_MOC_LITERAL(47, 12),  // "updateLegend"
        QT_MOC_LITERAL(60, 20),  // "QList<QwtLegendData>"
        QT_MOC_LITERAL(81, 11),  // "handleClick"
        QT_MOC_LITERAL(93, 11)   // "QModelIndex"
    },
    "Legend",
    "checked",
    "",
    "QwtPlotItem*",
    "plotItem",
    "on",
    "index",
    "updateLegend",
    "QList<QwtLegendData>",
    "handleClick",
    "QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Legend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   39,    2, 0x0a,    5 /* Public */,
       9,    1,   44,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Int,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void Legend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Legend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checked((*reinterpret_cast< std::add_pointer_t<QwtPlotItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->updateLegend((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QwtLegendData>>>(_a[2]))); break;
        case 2: _t->handleClick((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Legend::*)(QwtPlotItem * , bool , int );
            if (_t _q_method = &Legend::checked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Legend::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtAbstractLegend::staticMetaObject>(),
    qt_meta_stringdata_Legend.offsetsAndSizes,
    qt_meta_data_Legend,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Legend_t
, QtPrivate::TypeAndForceComplete<Legend, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QwtPlotItem *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QwtLegendData> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Legend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Legend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Legend.stringdata0))
        return static_cast<void*>(this);
    return QwtAbstractLegend::qt_metacast(_clname);
}

int Legend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAbstractLegend::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Legend::checked(QwtPlotItem * _t1, bool _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
