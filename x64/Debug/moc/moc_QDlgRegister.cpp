/****************************************************************************
** Meta object code from reading C++ file 'QDlgRegister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QDlgRegister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDlgRegister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDlgRegister_t {
    QByteArrayData data[7];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDlgRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDlgRegister_t qt_meta_stringdata_QDlgRegister = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QDlgRegister"
QT_MOC_LITERAL(1, 13, 17), // "on_btnReg_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(4, 53, 27), // "on_lineEditPwd2_textChanged"
QT_MOC_LITERAL(5, 81, 30), // "on_lineEditUername_textChanged"
QT_MOC_LITERAL(6, 112, 8) // "username"

    },
    "QDlgRegister\0on_btnReg_clicked\0\0"
    "on_btnCancel_clicked\0on_lineEditPwd2_textChanged\0"
    "on_lineEditUername_textChanged\0username"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDlgRegister[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void QDlgRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDlgRegister *_t = static_cast<QDlgRegister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnReg_clicked(); break;
        case 1: _t->on_btnCancel_clicked(); break;
        case 2: _t->on_lineEditPwd2_textChanged(); break;
        case 3: _t->on_lineEditUername_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QDlgRegister::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QDlgRegister.data,
      qt_meta_data_QDlgRegister,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDlgRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDlgRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDlgRegister.stringdata0))
        return static_cast<void*>(const_cast< QDlgRegister*>(this));
    return QDialog::qt_metacast(_clname);
}

int QDlgRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
