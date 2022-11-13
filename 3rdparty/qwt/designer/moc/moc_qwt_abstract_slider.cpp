/****************************************************************************
** Meta object code from reading C++ file 'qwt_abstract_slider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_abstract_slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_abstract_slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtAbstractSlider_t {
    uint offsetsAndSizes[32];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[14];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[9];
    char stringdata15[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtAbstractSlider_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtAbstractSlider_t qt_meta_stringdata_QwtAbstractSlider = {
    {
        QT_MOC_LITERAL(0, 17),  // "QwtAbstractSlider"
        QT_MOC_LITERAL(18, 12),  // "valueChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 5),  // "value"
        QT_MOC_LITERAL(38, 13),  // "sliderPressed"
        QT_MOC_LITERAL(52, 14),  // "sliderReleased"
        QT_MOC_LITERAL(67, 11),  // "sliderMoved"
        QT_MOC_LITERAL(79, 8),  // "setValue"
        QT_MOC_LITERAL(88, 10),  // "totalSteps"
        QT_MOC_LITERAL(99, 11),  // "singleSteps"
        QT_MOC_LITERAL(111, 9),  // "pageSteps"
        QT_MOC_LITERAL(121, 13),  // "stepAlignment"
        QT_MOC_LITERAL(135, 8),  // "readOnly"
        QT_MOC_LITERAL(144, 8),  // "tracking"
        QT_MOC_LITERAL(153, 8),  // "wrapping"
        QT_MOC_LITERAL(162, 16)   // "invertedControls"
    },
    "QwtAbstractSlider",
    "valueChanged",
    "",
    "value",
    "sliderPressed",
    "sliderReleased",
    "sliderMoved",
    "setValue",
    "totalSteps",
    "singleSteps",
    "pageSteps",
    "stepAlignment",
    "readOnly",
    "tracking",
    "wrapping",
    "invertedControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtAbstractSlider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       9,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,   10 /* Public */,
       4,    0,   47,    2, 0x06,   12 /* Public */,
       5,    0,   48,    2, 0x06,   13 /* Public */,
       6,    1,   49,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   52,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00115103, uint(0), 0,
       8, QMetaType::UInt, 0x00015103, uint(-1), 0,
       9, QMetaType::UInt, 0x00015103, uint(-1), 0,
      10, QMetaType::UInt, 0x00015103, uint(-1), 0,
      11, QMetaType::Bool, 0x00015103, uint(-1), 0,
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,
      14, QMetaType::Bool, 0x00015103, uint(-1), 0,
      15, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtAbstractSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtAbstractSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->sliderPressed(); break;
        case 2: _t->sliderReleased(); break;
        case 3: _t->sliderMoved((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtAbstractSlider::*)(double );
            if (_t _q_method = &QwtAbstractSlider::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtAbstractSlider::*)();
            if (_t _q_method = &QwtAbstractSlider::sliderPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QwtAbstractSlider::*)();
            if (_t _q_method = &QwtAbstractSlider::sliderReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QwtAbstractSlider::*)(double );
            if (_t _q_method = &QwtAbstractSlider::sliderMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtAbstractSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->totalSteps(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->singleSteps(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->pageSteps(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->stepAlignment(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isTracking(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->wrapping(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->invertedControls(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtAbstractSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTotalSteps(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->setSingleSteps(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->setPageSteps(*reinterpret_cast< uint*>(_v)); break;
        case 4: _t->setStepAlignment(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setInvertedControls(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtAbstractSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtAbstractScale::staticMetaObject>(),
    qt_meta_stringdata_QwtAbstractSlider.offsetsAndSizes,
    qt_meta_data_QwtAbstractSlider,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtAbstractSlider_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<uint, std::true_type>, QtPrivate::TypeAndForceComplete<uint, std::true_type>, QtPrivate::TypeAndForceComplete<uint, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QwtAbstractSlider, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtAbstractSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtAbstractSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtAbstractSlider.stringdata0))
        return static_cast<void*>(this);
    return QwtAbstractScale::qt_metacast(_clname);
}

int QwtAbstractSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAbstractScale::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QwtAbstractSlider::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtAbstractSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QwtAbstractSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QwtAbstractSlider::sliderMoved(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
