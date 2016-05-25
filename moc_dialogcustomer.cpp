/****************************************************************************
** Meta object code from reading C++ file 'dialogcustomer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogcustomer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogcustomer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogCustomer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      34,   15,   15,   15, 0x08,
      58,   15,   15,   15, 0x08,
      92,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogCustomer[] = {
    "DialogCustomer\0\0checkConditions()\0"
    "on_buttonBox_accepted()\0"
    "on_radioButton_compagny_clicked()\0"
    "on_radioButton_people_clicked()\0"
};

void DialogCustomer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogCustomer *_t = static_cast<DialogCustomer *>(_o);
        switch (_id) {
        case 0: _t->checkConditions(); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_radioButton_compagny_clicked(); break;
        case 3: _t->on_radioButton_people_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogCustomer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogCustomer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogCustomer,
      qt_meta_data_DialogCustomer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogCustomer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogCustomer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogCustomer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogCustomer))
        return static_cast<void*>(const_cast< DialogCustomer*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogCustomer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
