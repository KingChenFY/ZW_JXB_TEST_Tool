/****************************************************************************
** Meta object code from reading C++ file 'qwt_legend_label.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_legend_label.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_legend_label.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtLegendLabel_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[11];
    char stringdata7[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtLegendLabel_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtLegendLabel_t qt_meta_stringdata_QwtLegendLabel = {
    {
        QT_MOC_LITERAL(0, 14),  // "QwtLegendLabel"
        QT_MOC_LITERAL(15, 7),  // "clicked"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 7),  // "pressed"
        QT_MOC_LITERAL(32, 8),  // "released"
        QT_MOC_LITERAL(41, 7),  // "checked"
        QT_MOC_LITERAL(49, 10),  // "setChecked"
        QT_MOC_LITERAL(60, 2)   // "on"
    },
    "QwtLegendLabel",
    "clicked",
    "",
    "pressed",
    "released",
    "checked",
    "setChecked",
    "on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtLegendLabel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    1,   47,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QwtLegendLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtLegendLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->pressed(); break;
        case 2: _t->released(); break;
        case 3: _t->checked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtLegendLabel::*)();
            if (_t _q_method = &QwtLegendLabel::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtLegendLabel::*)();
            if (_t _q_method = &QwtLegendLabel::pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QwtLegendLabel::*)();
            if (_t _q_method = &QwtLegendLabel::released; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QwtLegendLabel::*)(bool );
            if (_t _q_method = &QwtLegendLabel::checked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QwtLegendLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtTextLabel::staticMetaObject>(),
    qt_meta_stringdata_QwtLegendLabel.offsetsAndSizes,
    qt_meta_data_QwtLegendLabel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtLegendLabel_t
, QtPrivate::TypeAndForceComplete<QwtLegendLabel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtLegendLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtLegendLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtLegendLabel.stringdata0))
        return static_cast<void*>(this);
    return QwtTextLabel::qt_metacast(_clname);
}

int QwtLegendLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtTextLabel::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QwtLegendLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QwtLegendLabel::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QwtLegendLabel::released()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QwtLegendLabel::checked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
