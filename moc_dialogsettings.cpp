/****************************************************************************
** Meta object code from reading C++ file 'dialogsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   15,   15,   15, 0x08,
      65,   15,   15,   15, 0x08,
     100,   15,   15,   15, 0x08,
     135,   15,   15,   15, 0x08,
     164,   15,   15,   15, 0x08,
     196,  188,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogSettings[] = {
    "DialogSettings\0\0askRefreshList()\0"
    "on_pushButton_connect_clicked()\0"
    "on_toolButton_BaseSelect_clicked()\0"
    "on_pushButton_ClearImage_clicked()\0"
    "on_pushButton_Logo_clicked()\0"
    "on_buttonBox_accepted()\0checked\0"
    "on_checkBox_TAX_toggled(bool)\0"
};

void DialogSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogSettings *_t = static_cast<DialogSettings *>(_o);
        switch (_id) {
        case 0: _t->askRefreshList(); break;
        case 1: _t->on_pushButton_connect_clicked(); break;
        case 2: _t->on_toolButton_BaseSelect_clicked(); break;
        case 3: _t->on_pushButton_ClearImage_clicked(); break;
        case 4: _t->on_pushButton_Logo_clicked(); break;
        case 5: _t->on_buttonBox_accepted(); break;
        case 6: _t->on_checkBox_TAX_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogSettings,
      qt_meta_data_DialogSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSettings))
        return static_cast<void*>(const_cast< DialogSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DialogSettings::askRefreshList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
