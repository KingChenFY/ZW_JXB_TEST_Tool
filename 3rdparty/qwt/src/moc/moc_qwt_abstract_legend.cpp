/****************************************************************************
** Meta object code from reading C++ file 'qwt_abstract_legend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_abstract_legend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_abstract_legend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtAbstractLegend_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[21];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtAbstractLegend_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtAbstractLegend_t qt_meta_stringdata_QwtAbstractLegend = {
    {
        QT_MOC_LITERAL(0, 17),  // "QwtAbstractLegend"
        QT_MOC_LITERAL(18, 12),  // "updateLegend"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 8),  // "itemInfo"
        QT_MOC_LITERAL(41, 20),  // "QList<QwtLegendData>"
        QT_MOC_LITERAL(62, 4)   // "data"
    },
    "QwtAbstractLegend",
    "updateLegend",
    "",
    "itemInfo",
    "QList<QwtLegendData>",
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtAbstractLegend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QwtAbstractLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtAbstractLegend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateLegend((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QwtLegendData>>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QwtAbstractLegend::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QwtAbstractLegend.offsetsAndSizes,
    qt_meta_data_QwtAbstractLegend,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtAbstractLegend_t
, QtPrivate::TypeAndForceComplete<QwtAbstractLegend, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QwtLegendData> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtAbstractLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtAbstractLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtAbstractLegend.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QwtAbstractLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
