/****************************************************************************
** Meta object code from reading C++ file 'dialogproduct.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogproduct.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogproduct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogProduct[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   14,   14,   14, 0x08,
      50,   14,   14,   14, 0x08,
      88,   14,   14,   14, 0x08,
     118,   14,   14,   14, 0x08,
     151,   14,   14,   14, 0x08,
     188,   14,   14,   14, 0x08,
     221,   14,   14,   14, 0x08,
     253,   14,   14,   14, 0x08,
     283,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogProduct[] = {
    "DialogProduct\0\0askRefreshList()\0"
    "checkConditions()\0"
    "on_toolButton_editCategorie_clicked()\0"
    "on_pushButton_close_clicked()\0"
    "on_pushButton_add_edit_clicked()\0"
    "on_toolButton_editProvider_clicked()\0"
    "on_toolButton_autoCode_clicked()\0"
    "on_toolButton_editTax_clicked()\0"
    "on_pushButton_image_clicked()\0"
    "on_pushButton_ClearImage_clicked()\0"
};

void DialogProduct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogProduct *_t = static_cast<DialogProduct *>(_o);
        switch (_id) {
        case 0: _t->askRefreshList(); break;
        case 1: _t->checkConditions(); break;
        case 2: _t->on_toolButton_editCategorie_clicked(); break;
        case 3: _t->on_pushButton_close_clicked(); break;
        case 4: _t->on_pushButton_add_edit_clicked(); break;
        case 5: _t->on_toolButton_editProvider_clicked(); break;
        case 6: _t->on_toolButton_autoCode_clicked(); break;
        case 7: _t->on_toolButton_editTax_clicked(); break;
        case 8: _t->on_pushButton_image_clicked(); break;
        case 9: _t->on_pushButton_ClearImage_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogProduct::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogProduct::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogProduct,
      qt_meta_data_DialogProduct, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogProduct::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogProduct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogProduct::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogProduct))
        return static_cast<void*>(const_cast< DialogProduct*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogProduct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DialogProduct::askRefreshList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
