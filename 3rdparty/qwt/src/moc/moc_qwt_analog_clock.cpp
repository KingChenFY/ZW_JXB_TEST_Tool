/****************************************************************************
** Meta object code from reading C++ file 'qwt_analog_clock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_analog_clock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_analog_clock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtAnalogClock_t {
    uint offsetsAndSizes[8];
    char stringdata0[15];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtAnalogClock_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtAnalogClock_t qt_meta_stringdata_QwtAnalogClock = {
    {
        QT_MOC_LITERAL(0, 14),  // "QwtAnalogClock"
        QT_MOC_LITERAL(15, 14),  // "setCurrentTime"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 7)   // "setTime"
    },
    "QwtAnalogClock",
    "setCurrentTime",
    "",
    "setTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtAnalogClock[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    2,

       0        // eod
};

void QwtAnalogClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtAnalogClock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentTime(); break;
        case 1: _t->setTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QwtAnalogClock::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtDial::staticMetaObject>(),
    qt_meta_stringdata_QwtAnalogClock.offsetsAndSizes,
    qt_meta_data_QwtAnalogClock,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtAnalogClock_t
, QtPrivate::TypeAndForceComplete<QwtAnalogClock, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtAnalogClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtAnalogClock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtAnalogClock.stringdata0))
        return static_cast<void*>(this);
    return QwtDial::qt_metacast(_clname);
}

int QwtAnalogClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
