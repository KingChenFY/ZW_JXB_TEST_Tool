/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_picker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_plot_picker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_picker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotPicker_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[3];
    char stringdata7[9];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtPlotPicker_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtPlotPicker_t qt_meta_stringdata_QwtPlotPicker = {
    {
        QT_MOC_LITERAL(0, 13),  // "QwtPlotPicker"
        QT_MOC_LITERAL(14, 8),  // "selected"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 3),  // "pos"
        QT_MOC_LITERAL(28, 4),  // "rect"
        QT_MOC_LITERAL(33, 14),  // "QList<QPointF>"
        QT_MOC_LITERAL(48, 2),  // "pa"
        QT_MOC_LITERAL(51, 8),  // "appended"
        QT_MOC_LITERAL(60, 5)   // "moved"
    },
    "QwtPlotPicker",
    "selected",
    "",
    "pos",
    "rect",
    "QList<QPointF>",
    "pa",
    "appended",
    "moved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotPicker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       1,    1,   47,    2, 0x06,    3 /* Public */,
       1,    1,   50,    2, 0x06,    5 /* Public */,
       7,    1,   53,    2, 0x06,    7 /* Public */,
       8,    1,   56,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QRectF,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,

       0        // eod
};

void QwtPlotPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtPlotPicker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 1: _t->selected((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< std::add_pointer_t<QList<QPointF>>>(_a[1]))); break;
        case 3: _t->appended((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 4: _t->moved((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QPointF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QwtPlotPicker::*)(const QPointF & );
            if (_t _q_method = &QwtPlotPicker::selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QwtPlotPicker::*)(const QRectF & );
            if (_t _q_method = &QwtPlotPicker::selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QwtPlotPicker::*)(const QVector<QPointF> & );
            if (_t _q_method = &QwtPlotPicker::selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QwtPlotPicker::*)(const QPointF & );
            if (_t _q_method = &QwtPlotPicker::appended; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QwtPlotPicker::*)(const QPointF & );
            if (_t _q_method = &QwtPlotPicker::moved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QwtPlotPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPicker::staticMetaObject>(),
    qt_meta_stringdata_QwtPlotPicker.offsetsAndSizes,
    qt_meta_data_QwtPlotPicker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtPlotPicker_t
, QtPrivate::TypeAndForceComplete<QwtPlotPicker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<QPointF> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>



>,
    nullptr
} };


const QMetaObject *QwtPlotPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotPicker.stringdata0))
        return static_cast<void*>(this);
    return QwtPicker::qt_metacast(_clname);
}

int QwtPlotPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPicker::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QwtPlotPicker::selected(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtPlotPicker::selected(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QwtPlotPicker::selected(const QVector<QPointF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QwtPlotPicker::appended(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QwtPlotPicker::moved(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
