/****************************************************************************
** Meta object code from reading C++ file 'Plot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qwt-git/examples/spectrogram/Plot.h"
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
    uint offsetsAndSizes[22];
    char stringdata0[5];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[12];
    char stringdata5[3];
    char stringdata6[16];
    char stringdata7[12];
    char stringdata8[18];
    char stringdata9[9];
    char stringdata10[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Plot_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Plot_t qt_meta_stringdata_Plot = {
    {
        QT_MOC_LITERAL(0, 4),  // "Plot"
        QT_MOC_LITERAL(5, 8),  // "rendered"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 6),  // "status"
        QT_MOC_LITERAL(22, 11),  // "showContour"
        QT_MOC_LITERAL(34, 2),  // "on"
        QT_MOC_LITERAL(37, 15),  // "showSpectrogram"
        QT_MOC_LITERAL(53, 11),  // "setColorMap"
        QT_MOC_LITERAL(65, 17),  // "setColorTableSize"
        QT_MOC_LITERAL(83, 8),  // "setAlpha"
        QT_MOC_LITERAL(92, 9)   // "printPlot"
    },
    "Plot",
    "rendered",
    "",
    "status",
    "showContour",
    "on",
    "showSpectrogram",
    "setColorMap",
    "setColorTableSize",
    "setAlpha",
    "printPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   59,    2, 0x0a,    3 /* Public */,
       6,    1,   62,    2, 0x0a,    5 /* Public */,
       7,    1,   65,    2, 0x0a,    7 /* Public */,
       8,    1,   68,    2, 0x0a,    9 /* Public */,
       9,    1,   71,    2, 0x0a,   11 /* Public */,
      10,    0,   74,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void Plot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rendered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->showContour((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->showSpectrogram((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setColorMap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setColorTableSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setAlpha((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->printPlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Plot::*)(const QString & );
            if (_t _q_method = &Plot::rendered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
, QtPrivate::TypeAndForceComplete<Plot, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Plot::rendered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
