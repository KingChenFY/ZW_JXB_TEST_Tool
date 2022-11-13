/****************************************************************************
** Meta object code from reading C++ file 'qwt_knob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_knob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_knob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtKnob_t {
    uint offsetsAndSizes[44];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[10];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[14];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[11];
    char stringdata11[12];
    char stringdata12[5];
    char stringdata13[7];
    char stringdata14[7];
    char stringdata15[7];
    char stringdata16[9];
    char stringdata17[5];
    char stringdata18[9];
    char stringdata19[4];
    char stringdata20[4];
    char stringdata21[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtKnob_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtKnob_t qt_meta_stringdata_QwtKnob = {
    {
        QT_MOC_LITERAL(0, 7),  // "QwtKnob"
        QT_MOC_LITERAL(8, 9),  // "knobStyle"
        QT_MOC_LITERAL(18, 9),  // "KnobStyle"
        QT_MOC_LITERAL(28, 9),  // "knobWidth"
        QT_MOC_LITERAL(38, 9),  // "alignment"
        QT_MOC_LITERAL(48, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(62, 10),  // "totalAngle"
        QT_MOC_LITERAL(73, 8),  // "numTurns"
        QT_MOC_LITERAL(82, 11),  // "markerStyle"
        QT_MOC_LITERAL(94, 11),  // "MarkerStyle"
        QT_MOC_LITERAL(106, 10),  // "markerSize"
        QT_MOC_LITERAL(117, 11),  // "borderWidth"
        QT_MOC_LITERAL(129, 4),  // "Flat"
        QT_MOC_LITERAL(134, 6),  // "Raised"
        QT_MOC_LITERAL(141, 6),  // "Sunken"
        QT_MOC_LITERAL(148, 6),  // "Styled"
        QT_MOC_LITERAL(155, 8),  // "NoMarker"
        QT_MOC_LITERAL(164, 4),  // "Tick"
        QT_MOC_LITERAL(169, 8),  // "Triangle"
        QT_MOC_LITERAL(178, 3),  // "Dot"
        QT_MOC_LITERAL(182, 3),  // "Nub"
        QT_MOC_LITERAL(186, 5)   // "Notch"
    },
    "QwtKnob",
    "knobStyle",
    "KnobStyle",
    "knobWidth",
    "alignment",
    "Qt::Alignment",
    "totalAngle",
    "numTurns",
    "markerStyle",
    "MarkerStyle",
    "markerSize",
    "borderWidth",
    "Flat",
    "Raised",
    "Sunken",
    "Styled",
    "NoMarker",
    "Tick",
    "Triangle",
    "Dot",
    "Nub",
    "Notch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtKnob[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
       6, QMetaType::Double, 0x00015103, uint(-1), 0,
       7, QMetaType::Int, 0x00015103, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      10, QMetaType::Int, 0x00015103, uint(-1), 0,
      11, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    4,   64,
       9,    9, 0x0,    6,   72,

 // enum data: key, value
      12, uint(QwtKnob::Flat),
      13, uint(QwtKnob::Raised),
      14, uint(QwtKnob::Sunken),
      15, uint(QwtKnob::Styled),
      16, uint(QwtKnob::NoMarker),
      17, uint(QwtKnob::Tick),
      18, uint(QwtKnob::Triangle),
      19, uint(QwtKnob::Dot),
      20, uint(QwtKnob::Nub),
      21, uint(QwtKnob::Notch),

       0        // eod
};

void QwtKnob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtKnob *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KnobStyle*>(_v) = _t->knobStyle(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->knobWidth(); break;
        case 2: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->totalAngle(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numTurns(); break;
        case 5: *reinterpret_cast< MarkerStyle*>(_v) = _t->markerStyle(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->markerSize(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->borderWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtKnob *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKnobStyle(*reinterpret_cast< KnobStyle*>(_v)); break;
        case 1: _t->setKnobWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 3: _t->setTotalAngle(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setNumTurns(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMarkerStyle(*reinterpret_cast< MarkerStyle*>(_v)); break;
        case 6: _t->setMarkerSize(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject QwtKnob::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtAbstractSlider::staticMetaObject>(),
    qt_meta_stringdata_QwtKnob.offsetsAndSizes,
    qt_meta_data_QwtKnob,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtKnob_t
, QtPrivate::TypeAndForceComplete<KnobStyle, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<MarkerStyle, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QwtKnob, std::true_type>



>,
    nullptr
} };


const QMetaObject *QwtKnob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtKnob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtKnob.stringdata0))
        return static_cast<void*>(this);
    return QwtAbstractSlider::qt_metacast(_clname);
}

int QwtKnob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
