/****************************************************************************
** Meta object code from reading C++ file 'qwt_dial.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_dial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_dial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtDial_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[12];
    char stringdata3[7];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[7];
    char stringdata11[7];
    char stringdata12[13];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtDial_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtDial_t qt_meta_stringdata_QwtDial = {
    {
        QT_MOC_LITERAL(0, 7),  // "QwtDial"
        QT_MOC_LITERAL(8, 9),  // "lineWidth"
        QT_MOC_LITERAL(18, 11),  // "frameShadow"
        QT_MOC_LITERAL(30, 6),  // "Shadow"
        QT_MOC_LITERAL(37, 4),  // "mode"
        QT_MOC_LITERAL(42, 4),  // "Mode"
        QT_MOC_LITERAL(47, 6),  // "origin"
        QT_MOC_LITERAL(54, 11),  // "minScaleArc"
        QT_MOC_LITERAL(66, 11),  // "maxScaleArc"
        QT_MOC_LITERAL(78, 5),  // "Plain"
        QT_MOC_LITERAL(84, 6),  // "Raised"
        QT_MOC_LITERAL(91, 6),  // "Sunken"
        QT_MOC_LITERAL(98, 12),  // "RotateNeedle"
        QT_MOC_LITERAL(111, 11)   // "RotateScale"
    },
    "QwtDial",
    "lineWidth",
    "frameShadow",
    "Shadow",
    "mode",
    "Mode",
    "origin",
    "minScaleArc",
    "maxScaleArc",
    "Plain",
    "Raised",
    "Sunken",
    "RotateNeedle",
    "RotateScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtDial[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001510b, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
       6, QMetaType::Double, 0x00015103, uint(-1), 0,
       7, QMetaType::Double, 0x00015103, uint(-1), 0,
       8, QMetaType::Double, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,   54,
       5,    5, 0x0,    2,   60,

 // enum data: key, value
       9, uint(QwtDial::Plain),
      10, uint(QwtDial::Raised),
      11, uint(QwtDial::Sunken),
      12, uint(QwtDial::RotateNeedle),
      13, uint(QwtDial::RotateScale),

       0        // eod
};

void QwtDial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtDial *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 1: *reinterpret_cast< Shadow*>(_v) = _t->frameShadow(); break;
        case 2: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->origin(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minScaleArc(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maxScaleArc(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtDial *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFrameShadow(*reinterpret_cast< Shadow*>(_v)); break;
        case 2: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 3: _t->setOrigin(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMinScaleArc(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaxScaleArc(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject QwtDial::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_QwtDial.offsetsAndSizes,
    qt_meta_data_QwtDial,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtDial_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<Shadow, std::true_type>, QtPrivate::TypeAndForceComplete<Mode, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QwtDial, std::true_type>



>,
    nullptr
} };


const QMetaObject *QwtDial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtDial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtDial.stringdata0))
        return static_cast<void*>(this);
    return QwtAbstractSlider::qt_metacast(_clname);
}

int QwtDial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
