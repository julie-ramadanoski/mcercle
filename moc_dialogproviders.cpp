/****************************************************************************
** Meta object code from reading C++ file 'dialogproviders.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogproviders.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogproviders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogProviders[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      48,   16,   16,   16, 0x08,
      77,   16,   16,   16, 0x08,
     125,   16,   16,   16, 0x08,
     153,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogProviders[] = {
    "DialogProviders\0\0on_pushButton_delete_clicked()\0"
    "on_pushButton_edit_clicked()\0"
    "on_tableWidget_providers_itemSelectionChanged()\0"
    "on_pushButton_add_clicked()\0"
    "on_buttonBox_accepted()\0"
};

void DialogProviders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogProviders *_t = static_cast<DialogProviders *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_delete_clicked(); break;
        case 1: _t->on_pushButton_edit_clicked(); break;
        case 2: _t->on_tableWidget_providers_itemSelectionChanged(); break;
        case 3: _t->on_pushButton_add_clicked(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogProviders::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogProviders::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogProviders,
      qt_meta_data_DialogProviders, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogProviders::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogProviders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogProviders::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogProviders))
        return static_cast<void*>(const_cast< DialogProviders*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogProviders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
