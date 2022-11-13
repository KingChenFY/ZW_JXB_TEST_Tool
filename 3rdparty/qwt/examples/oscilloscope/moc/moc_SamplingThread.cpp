/****************************************************************************
** Meta object code from reading C++ file 'SamplingThread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qwt-git/examples/oscilloscope/SamplingThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SamplingThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SamplingThread_t {
    uint offsetsAndSizes[8];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SamplingThread_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_SamplingThread_t qt_meta_stringdata_SamplingThread = {
    {
        QT_MOC_LITERAL(0, 14),  // "SamplingThread"
        QT_MOC_LITERAL(15, 12),  // "setAmplitude"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 12)   // "setFrequency"
    },
    "SamplingThread",
    "setAmplitude",
    "",
    "setFrequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SamplingThread[] = {

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
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void SamplingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SamplingThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAmplitude((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->setFrequency((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SamplingThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtSamplingThread::staticMetaObject>(),
    qt_meta_stringdata_SamplingThread.offsetsAndSizes,
    qt_meta_data_SamplingThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SamplingThread_t
, QtPrivate::TypeAndForceComplete<SamplingThread, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *SamplingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SamplingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SamplingThread.stringdata0))
        return static_cast<void*>(this);
    return QwtSamplingThread::qt_metacast(_clname);
}

int SamplingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtSamplingThread::qt_metacall(_c, _id, _a);
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
