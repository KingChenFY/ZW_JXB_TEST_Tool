/****************************************************************************
** Meta object code from reading C++ file 'qwt_slider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtSlider_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[16];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[13];
    char stringdata12[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtSlider_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtSlider_t qt_meta_stringdata_QwtSlider = {
    {
        QT_MOC_LITERAL(0, 9),  // "QwtSlider"
        QT_MOC_LITERAL(10, 11),  // "orientation"
        QT_MOC_LITERAL(22, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(38, 13),  // "scalePosition"
        QT_MOC_LITERAL(52, 13),  // "ScalePosition"
        QT_MOC_LITERAL(66, 6),  // "trough"
        QT_MOC_LITERAL(73, 6),  // "groove"
        QT_MOC_LITERAL(80, 10),  // "handleSize"
        QT_MOC_LITERAL(91, 11),  // "borderWidth"
        QT_MOC_LITERAL(103, 7),  // "spacing"
        QT_MOC_LITERAL(111, 7),  // "NoScale"
        QT_MOC_LITERAL(119, 12),  // "LeadingScale"
        QT_MOC_LITERAL(132, 13)   // "TrailingScale"
    },
    "QwtSlider",
    "orientation",
    "Qt::Orientation",
    "scalePosition",
    "ScalePosition",
    "trough",
    "groove",
    "handleSize",
    "borderWidth",
    "spacing",
    "NoScale",
    "LeadingScale",
    "TrailingScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtSlider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(-1), 0,
       7, QMetaType::QSize, 0x00015103, uint(-1), 0,
       8, QMetaType::Int, 0x00015103, uint(-1), 0,
       9, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    3,   54,

 // enum data: key, value
      10, uint(QwtSlider::NoScale),
      11, uint(QwtSlider::LeadingScale),
      12, uint(QwtSlider::TrailingScale),

       0        // eod
};

void QwtSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< ScalePosition*>(_v) = _t->scalePosition(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasTrough(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasGroove(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->handleSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->borderWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->spacing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setScalePosition(*reinterpret_cast< ScalePosition*>(_v)); break;
        case 2: _t->setTrough(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setGroove(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setHandleSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject QwtSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_QwtSlider.offsetsAndSizes,
    qt_meta_data_QwtSlider,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtSlider_t
, QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>, QtPrivate::TypeAndForceComplete<ScalePosition, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QSize, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QwtSlider, std::true_type>



>,
    nullptr
} };


const QMetaObject *QwtSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtSlider.stringdata0))
        return static_cast<void*>(this);
    return QwtAbstractSlider::qt_metacast(_clname);
}

int QwtSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
