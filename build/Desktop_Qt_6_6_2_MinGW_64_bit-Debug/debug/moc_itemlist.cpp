/****************************************************************************
** Meta object code from reading C++ file 'itemlist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemlist.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemlist.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSItemListENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSItemListENDCLASS = QtMocHelpers::stringData(
    "ItemList",
    "refreshList",
    "",
    "onRefresh",
    "on_addButton_clicked",
    "on_deleteButton_clicked",
    "on_itemView_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_clearButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSItemListENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[21];
    char stringdata5[24];
    char stringdata6[24];
    char stringdata7[17];
    char stringdata8[5];
    char stringdata9[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSItemListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSItemListENDCLASS_t qt_meta_stringdata_CLASSItemListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "ItemList"
        QT_MOC_LITERAL(9, 11),  // "refreshList"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "onRefresh"
        QT_MOC_LITERAL(32, 20),  // "on_addButton_clicked"
        QT_MOC_LITERAL(53, 23),  // "on_deleteButton_clicked"
        QT_MOC_LITERAL(77, 23),  // "on_itemView_itemClicked"
        QT_MOC_LITERAL(101, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(118, 4),  // "item"
        QT_MOC_LITERAL(123, 22)   // "on_clearButton_clicked"
    },
    "ItemList",
    "refreshList",
    "",
    "onRefresh",
    "on_addButton_clicked",
    "on_deleteButton_clicked",
    "on_itemView_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_clearButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSItemListENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       9,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ItemList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSItemListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSItemListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSItemListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ItemList, std::true_type>,
        // method 'refreshList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRefresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_itemView_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_clearButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ItemList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshList(); break;
        case 1: _t->onRefresh(); break;
        case 2: _t->on_addButton_clicked(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_itemView_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 5: _t->on_clearButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemList::*)();
            if (_t _q_method = &ItemList::refreshList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ItemList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSItemListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ItemList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void ItemList::refreshList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
