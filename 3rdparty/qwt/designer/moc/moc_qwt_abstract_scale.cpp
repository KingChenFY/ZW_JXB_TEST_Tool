/****************************************************************************
** Meta object code from reading C++ file 'qwt_abstract_scale.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_abstract_scale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_abstract_scale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtAbstractScale_t {
    uint offsetsAndSizes[12];
    char stringdata0[17];
    char stringdata1[11];
    char stringdata2[11];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtAbstractScale_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtAbstractScale_t qt_meta_stringdata_QwtAbstractScale = {
    {
        QT_MOC_LITERAL(0, 16),  // "QwtAbstractScale"
        QT_MOC_LITERAL(17, 10),  // "lowerBound"
        QT_MOC_LITERAL(28, 10),  // "upperBound"
        QT_MOC_LITERAL(39, 13),  // "scaleMaxMajor"
        QT_MOC_LITERAL(53, 13),  // "scaleMaxMinor"
        QT_MOC_LITERAL(67, 13)   // "scaleStepSize"
    },
    "QwtAbstractScale",
    "lowerBound",
    "upperBound",
    "scaleMaxMajor",
    "scaleMaxMinor",
    "scaleStepSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtAbstractScale[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, QMetaType::Double, 0x00015103, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, QMetaType::Int, 0x00015103, uint(-1), 0,
       5, QMetaType::Double, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtAbstractScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtAbstractScale *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->lowerBound(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->upperBound(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->scaleMaxMajor(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->scaleMaxMinor(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->scaleStepSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtAbstractScale *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLowerBound(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setUpperBound(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setScaleMaxMajor(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setScaleMaxMinor(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setScaleStepSize(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject QwtAbstractScale::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QwtAbstractScale.offsetsAndSizes,
    qt_meta_data_QwtAbstractScale,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtAbstractScale_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QwtAbstractScale, std::true_type>



>,
    nullptr
} };


const QMetaObject *QwtAbstractScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtAbstractScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtAbstractScale.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QwtAbstractScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
