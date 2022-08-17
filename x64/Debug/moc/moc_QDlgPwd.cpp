/****************************************************************************
** Meta object code from reading C++ file 'QDlgPwd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QDlgPwd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDlgPwd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDlgPwd_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDlgPwd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDlgPwd_t qt_meta_stringdata_QDlgPwd = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QDlgPwd"
QT_MOC_LITERAL(1, 8, 31), // "on_lineEditUsername_textChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "username"
QT_MOC_LITERAL(4, 50, 24), // "on_pushButtonUpd_clicked"
QT_MOC_LITERAL(5, 75, 27) // "on_lineEditPwd2_textChanged"

    },
    "QDlgPwd\0on_lineEditUsername_textChanged\0"
    "\0username\0on_pushButtonUpd_clicked\0"
    "on_lineEditPwd2_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDlgPwd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QDlgPwd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDlgPwd *_t = static_cast<QDlgPwd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEditUsername_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonUpd_clicked(); break;
        case 2: _t->on_lineEditPwd2_textChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QDlgPwd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QDlgPwd.data,
      qt_meta_data_QDlgPwd,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDlgPwd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDlgPwd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDlgPwd.stringdata0))
        return static_cast<void*>(const_cast< QDlgPwd*>(this));
    return QDialog::qt_metacast(_clname);
}

int QDlgPwd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
