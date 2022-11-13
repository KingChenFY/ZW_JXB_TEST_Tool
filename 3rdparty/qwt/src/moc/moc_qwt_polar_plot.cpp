/****************************************************************************
** Meta object code from reading C++ file 'qwt_polar_plot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_polar_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_polar_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPolarPlot_t {
    uint offsetsAndSizes[32];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[9];
    char stringdata5[3];
    char stringdata6[18];
    char stringdata7[9];
    char stringdata8[21];
    char stringdata9[5];
    char stringdata10[14];
    char stringdata11[7];
    char stringdata12[12];
    char stringdata13[17];
    char stringdata14[15];
    char stringdata15[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPolarPlot_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPolarPlot_t qt_meta_stringdata_QwtPolarPlot = {
    {
        QT_MOC_LITERAL(0, 12),  // "QwtPolarPlot"
        QT_MOC_LITERAL(13, 12),  // "itemAttached"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 13),  // "QwtPolarItem*"
        QT_MOC_LITERAL(41, 8),  // "plotItem"
        QT_MOC_LITERAL(50, 2),  // "on"
        QT_MOC_LITERAL(53, 17),  // "legendDataChanged"
        QT_MOC_LITERAL(71, 8),  // "itemInfo"
        QT_MOC_LITERAL(80, 20),  // "QList<QwtLegendData>"
        QT_MOC_LITERAL(101, 4),  // "data"
        QT_MOC_LITERAL(106, 13),  // "layoutChanged"
        QT_MOC_LITERAL(120, 6),  // "replot"
        QT_MOC_LITERAL(127, 11),  // "autoRefresh"
        QT_MOC_LITERAL(139, 16),  // "setAzimuthOrigin"
        QT_MOC_LITERAL(156, 14),  // "plotBackground"
        QT_MOC_LITERAL(171, 13)   // "azimuthOrigin"
    },
    "QwtPolarPlot",
    "itemAttached",
    "",
    "QwtPolarItem*",
    "plotItem",
    "on",
    "legendDataChanged",
    "itemInfo",
    "QList<QwtLegendData>",
    "data",
    "layoutChanged",
    "replot",
    "autoRefresh",
    "setAzimuthOrigin",
    "plotBackground",
    "azimuthOrigin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPolarPlot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    3 /* Public */,
       6,    2,   55,    2, 0x06,    6 /* Public */,
      10,    0,   60,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   61,    2, 0x0a,   10 /* Public */,
      12,    0,   62,    2, 0x0a,   11 /* Public */,
      13,    1,   63,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8,    7,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      14, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      15, QMetaType::Double, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtPolarPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPolarPlot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemAttached((*reinterpret_cast< std::add_pointer_t<QwtPolarItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->legendDataChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QwtLegendData>>>(_a[2]))); break;
        case 2: _t->layoutChanged(); break;
        case 3: _t->replot(); break;
        case 4: _t->autoRefresh(); break;
        case 5: _t->setAzimuthOrigin((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QwtPolarItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtPolarPlot::*)(QwtPolarItem * , bool );
            if (_t _q_method = &QwtPolarPlot::itemAttached; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtPolarPlot::*)(const QVariant & , const QList<QwtLegendData> & );
            if (_t _q_method = &QwtPolarPlot::legendDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QwtPolarPlot::*)();
            if (_t _q_method = &QwtPolarPlot::layoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtPolarPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->plotBackground(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->azimuthOrigin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtPolarPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlotBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setAzimuthOrigin(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtPolarPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QwtPolarPlot.offsetsAndSizes,
    qt_meta_data_QwtPolarPlot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPolarPlot_t
, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<QwtPolarPlot, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QwtPolarItem *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QwtLegendData> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtPolarPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPolarPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPolarPlot.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QwtPolarItemDict"))
        return static_cast< QwtPolarItemDict*>(this);
    return QFrame::qt_metacast(_clname);
}

int QwtPolarPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QwtPolarPlot::itemAttached(QwtPolarItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtPolarPlot::legendDataChanged(const QVariant & _t1, const QList<QwtLegendData> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QwtPolarPlot::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
