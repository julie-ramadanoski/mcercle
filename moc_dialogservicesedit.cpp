/****************************************************************************
** Meta object code from reading C++ file 'dialogservicesedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogservicesedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogservicesedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogServicesEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      38,   19,   19,   19, 0x08,
      82,   19,   19,   19, 0x08,
     110,   19,   19,   19, 0x08,
     139,   19,   19,   19, 0x08,
     167,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogServicesEdit[] = {
    "DialogServicesEdit\0\0checkConditions()\0"
    "on_tableWidget_Inter_itemSelectionChanged()\0"
    "on_pushButton_add_clicked()\0"
    "on_pushButton_edit_clicked()\0"
    "on_pushButton_del_clicked()\0"
    "on_pushButton_close_clicked()\0"
};

void DialogServicesEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogServicesEdit *_t = static_cast<DialogServicesEdit *>(_o);
        switch (_id) {
        case 0: _t->checkConditions(); break;
        case 1: _t->on_tableWidget_Inter_itemSelectionChanged(); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->on_pushButton_edit_clicked(); break;
        case 4: _t->on_pushButton_del_clicked(); break;
        case 5: _t->on_pushButton_close_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogServicesEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogServicesEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogServicesEdit,
      qt_meta_data_DialogServicesEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogServicesEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogServicesEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogServicesEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogServicesEdit))
        return static_cast<void*>(const_cast< DialogServicesEdit*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogServicesEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
