/****************************************************************************
** Meta object code from reading C++ file 'qwt_counter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_counter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtCounter_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[13];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[9];
    char stringdata17[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtCounter_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtCounter_t qt_meta_stringdata_QwtCounter = {
    {
        QT_MOC_LITERAL(0, 10),  // "QwtCounter"
        QT_MOC_LITERAL(11, 14),  // "buttonReleased"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "value"
        QT_MOC_LITERAL(33, 12),  // "valueChanged"
        QT_MOC_LITERAL(46, 8),  // "setValue"
        QT_MOC_LITERAL(55, 11),  // "btnReleased"
        QT_MOC_LITERAL(67, 10),  // "btnClicked"
        QT_MOC_LITERAL(78, 11),  // "textChanged"
        QT_MOC_LITERAL(90, 7),  // "minimum"
        QT_MOC_LITERAL(98, 7),  // "maximum"
        QT_MOC_LITERAL(106, 10),  // "singleStep"
        QT_MOC_LITERAL(117, 10),  // "numButtons"
        QT_MOC_LITERAL(128, 11),  // "stepButton1"
        QT_MOC_LITERAL(140, 11),  // "stepButton2"
        QT_MOC_LITERAL(152, 11),  // "stepButton3"
        QT_MOC_LITERAL(164, 8),  // "readOnly"
        QT_MOC_LITERAL(173, 8)   // "wrapping"
    },
    "QwtCounter",
    "buttonReleased",
    "",
    "value",
    "valueChanged",
    "setValue",
    "btnReleased",
    "btnClicked",
    "textChanged",
    "minimum",
    "maximum",
    "singleStep",
    "numButtons",
    "stepButton1",
    "stepButton2",
    "stepButton3",
    "readOnly",
    "wrapping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtCounter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      10,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,   11 /* Public */,
       4,    1,   53,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   56,    2, 0x0a,   15 /* Public */,
       6,    0,   59,    2, 0x08,   17 /* Private */,
       7,    0,   60,    2, 0x08,   18 /* Private */,
       8,    0,   61,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00115103, uint(1), 0,
       9, QMetaType::Double, 0x00015103, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::Double, 0x00015103, uint(-1), 0,
      12, QMetaType::Int, 0x00015103, uint(-1), 0,
      13, QMetaType::Int, 0x00015103, uint(-1), 0,
      14, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, QMetaType::Int, 0x00015103, uint(-1), 0,
      16, QMetaType::Bool, 0x00015103, uint(-1), 0,
      17, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtCounter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonReleased((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->btnReleased(); break;
        case 4: _t->btnClicked(); break;
        case 5: _t->textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtCounter::*)(double );
            if (_t _q_method = &QwtCounter::buttonReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtCounter::*)(double );
            if (_t _q_method = &QwtCounter::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtCounter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numButtons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->stepButton1(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->stepButton2(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->stepButton3(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->wrapping(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtCounter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setNumButtons(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setStepButton1(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setStepButton2(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setStepButton3(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setWrapping(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtCounter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QwtCounter.offsetsAndSizes,
    qt_meta_data_QwtCounter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtCounter_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QwtCounter, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtCounter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QwtCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QwtCounter::buttonReleased(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtCounter::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
