/****************************************************************************
** Meta object code from reading C++ file 'registerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../registerdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRegisterDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRegisterDialogENDCLASS = QtMocHelpers::stringData(
    "RegisterDialog",
    "onUserEdited",
    "",
    "onEmailEdited",
    "onConfirmPassEdited",
    "onUpdateVerifyLabel",
    "on_cancelButton_clicked",
    "on_registerButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegisterDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[24];
    char stringdata7[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegisterDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegisterDialogENDCLASS_t qt_meta_stringdata_CLASSRegisterDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "RegisterDialog"
        QT_MOC_LITERAL(15, 12),  // "onUserEdited"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 13),  // "onEmailEdited"
        QT_MOC_LITERAL(43, 19),  // "onConfirmPassEdited"
        QT_MOC_LITERAL(63, 19),  // "onUpdateVerifyLabel"
        QT_MOC_LITERAL(83, 23),  // "on_cancelButton_clicked"
        QT_MOC_LITERAL(107, 25)   // "on_registerButton_clicked"
    },
    "RegisterDialog",
    "onUserEdited",
    "",
    "onEmailEdited",
    "onConfirmPassEdited",
    "onUpdateVerifyLabel",
    "on_cancelButton_clicked",
    "on_registerButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegisterDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RegisterDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegisterDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegisterDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegisterDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RegisterDialog, std::true_type>,
        // method 'onUserEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEmailEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConfirmPassEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateVerifyLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_registerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RegisterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisterDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUserEdited(); break;
        case 1: _t->onEmailEdited(); break;
        case 2: _t->onConfirmPassEdited(); break;
        case 3: _t->onUpdateVerifyLabel(); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_registerButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *RegisterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegisterDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RegisterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
