/****************************************************************************
** Meta object code from reading C++ file 'Plot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qwt-git/examples/splineeditor/Plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Plot_t {
    uint offsetsAndSizes[26];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[5];
    char stringdata5[14];
    char stringdata6[3];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[21];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Plot_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Plot_t qt_meta_stringdata_Plot = {
    {
        QT_MOC_LITERAL(0, 4),  // "Plot"
        QT_MOC_LITERAL(5, 12),  // "updateMarker"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 4),  // "axis"
        QT_MOC_LITERAL(24, 4),  // "base"
        QT_MOC_LITERAL(29, 13),  // "legendChecked"
        QT_MOC_LITERAL(43, 2),  // "on"
        QT_MOC_LITERAL(46, 13),  // "setOverlaying"
        QT_MOC_LITERAL(60, 13),  // "setParametric"
        QT_MOC_LITERAL(74, 20),  // "setBoundaryCondition"
        QT_MOC_LITERAL(95, 9),  // "setClosed"
        QT_MOC_LITERAL(105, 9),  // "printPlot"
        QT_MOC_LITERAL(115, 14)   // "scrollLeftAxis"
    },
    "Plot",
    "updateMarker",
    "",
    "axis",
    "base",
    "legendChecked",
    "on",
    "setOverlaying",
    "setParametric",
    "setBoundaryCondition",
    "setClosed",
    "printPlot",
    "scrollLeftAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x0a,    1 /* Public */,
       5,    2,   67,    2, 0x0a,    4 /* Public */,
       7,    1,   72,    2, 0x0a,    7 /* Public */,
       8,    1,   75,    2, 0x0a,    9 /* Public */,
       9,    1,   78,    2, 0x0a,   11 /* Public */,
      10,    1,   81,    2, 0x0a,   13 /* Public */,
      11,    0,   84,    2, 0x0a,   15 /* Public */,
      12,    1,   85,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,    2,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void Plot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateMarker((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->legendChecked((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->setOverlaying((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setParametric((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setBoundaryCondition((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setClosed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->printPlot(); break;
        case 7: _t->scrollLeftAxis((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Plot::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlot::staticMetaObject>(),
    qt_meta_stringdata_Plot.offsetsAndSizes,
    qt_meta_data_Plot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Plot_t
, QtPrivate::TypeAndForceComplete<Plot, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Plot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plot.stringdata0))
        return static_cast<void*>(this);
    return QwtPlot::qt_metacast(_clname);
}

int Plot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
