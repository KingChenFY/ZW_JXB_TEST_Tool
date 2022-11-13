/****************************************************************************
** Meta object code from reading C++ file 'qwt_text_label.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qwt-git/src/qwt_text_label.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_text_label.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtTextLabel_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[11];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QwtTextLabel_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_QwtTextLabel_t qt_meta_stringdata_QwtTextLabel = {
    {
        QT_MOC_LITERAL(0, 12),  // "QwtTextLabel"
        QT_MOC_LITERAL(13, 7),  // "setText"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 19),  // "QwtText::TextFormat"
        QT_MOC_LITERAL(42, 10),  // "textFormat"
        QT_MOC_LITERAL(53, 7),  // "QwtText"
        QT_MOC_LITERAL(61, 5),  // "clear"
        QT_MOC_LITERAL(67, 6),  // "indent"
        QT_MOC_LITERAL(74, 6),  // "margin"
        QT_MOC_LITERAL(81, 9)   // "plainText"
    },
    "QwtTextLabel",
    "setText",
    "",
    "QwtText::TextFormat",
    "textFormat",
    "QwtText",
    "clear",
    "indent",
    "margin",
    "plainText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtTextLabel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x0a,    4 /* Public */,
       1,    1,   43,    2, 0x2a,    7 /* Public | MethodCloned */,
       1,    1,   46,    2, 0x0a,    9 /* Public */,
       6,    0,   49,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015103, uint(-1), 0,
       8, QMetaType::Int, 0x00015103, uint(-1), 0,
       9, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

void QwtTextLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QwtTextLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QwtText::TextFormat>>(_a[2]))); break;
        case 1: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setText((*reinterpret_cast< std::add_pointer_t<QwtText>>(_a[1]))); break;
        case 3: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QwtText >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QwtTextLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->indent(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->margin(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->plainText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QwtTextLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndent(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPlainText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtTextLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QwtTextLabel.offsetsAndSizes,
    qt_meta_data_QwtTextLabel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QwtTextLabel_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<QwtTextLabel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QwtText::TextFormat, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QwtText &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QwtTextLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtTextLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtTextLabel.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QwtTextLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
