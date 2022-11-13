/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlot_t {
    uint offsetsAndSizes[32];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[9];
    char stringdata5[3];
    char stringdata6[18];
    char stringdata7[9];
    char stringdata8[21];
    char stringdata9[5];
    char stringdata10[7];
    char stringdata11[12];
    char stringdata12[18];
    char stringdata13[11];
    char stringdata14[17];
    char stringdata15[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlot_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlot_t qt_meta_stringdata_QwtPlot = {
    {
        QT_MOC_LITERAL(0, 7),  // "QwtPlot"
        QT_MOC_LITERAL(8, 12),  // "itemAttached"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "QwtPlotItem*"
        QT_MOC_LITERAL(35, 8),  // "plotItem"
        QT_MOC_LITERAL(44, 2),  // "on"
        QT_MOC_LITERAL(47, 17),  // "legendDataChanged"
        QT_MOC_LITERAL(65, 8),  // "itemInfo"
        QT_MOC_LITERAL(74, 20),  // "QList<QwtLegendData>"
        QT_MOC_LITERAL(95, 4),  // "data"
        QT_MOC_LITERAL(100, 6),  // "replot"
        QT_MOC_LITERAL(107, 11),  // "autoRefresh"
        QT_MOC_LITERAL(119, 17),  // "updateLegendItems"
        QT_MOC_LITERAL(137, 10),  // "legendData"
        QT_MOC_LITERAL(148, 16),  // "canvasBackground"
        QT_MOC_LITERAL(165, 10)   // "autoReplot"
    },
    "QwtPlot",
    "itemAttached",
    "",
    "QwtPlotItem*",
    "plotItem",
    "on",
    "legendDataChanged",
    "itemInfo",
    "QList<QwtLegendData>",
    "data",
    "replot",
    "autoRefresh",
    "updateLegendItems",
    "legendData",
    "canvasBackground",
    "autoReplot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   61, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    3 /* Public */,
       6,    2,   49,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   54,    2, 0x0a,    9 /* Public */,
      11,    0,   55,    2, 0x0a,   10 /* Public */,
      12,    2,   56,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8,    7,   13,

 // properties: name, type, flags
      14, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      15, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemAttached((*reinterpret_cast< std::add_pointer_t<QwtPlotItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->legendDataChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QwtLegendData>>>(_a[2]))); break;
        case 2: _t->replot(); break;
        case 3: _t->autoRefresh(); break;
        case 4: _t->updateLegendItems((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QwtLegendData>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QwtPlotItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtPlot::*)(QwtPlotItem * , bool );
            if (_t _q_method = &QwtPlot::itemAttached; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtPlot::*)(const QVariant & , const QList<QwtLegendData> & );
            if (_t _q_method = &QwtPlot::legendDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->canvasBackground(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoReplot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCanvasBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setAutoReplot(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QwtPlot.offsetsAndSizes,
    qt_meta_data_QwtPlot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlot_t
, QtPrivate::TypeAndForceComplete<QBrush, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QwtPlot, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QwtPlotItem *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QwtLegendData> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QwtLegendData> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlot.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QwtPlotDict"))
        return static_cast< QwtPlotDict*>(this);
    return QFrame::qt_metacast(_clname);
}

int QwtPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void QwtPlot::itemAttached(QwtPlotItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtPlot::legendDataChanged(const QVariant & _t1, const QList<QwtLegendData> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
