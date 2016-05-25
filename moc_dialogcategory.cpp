/****************************************************************************
** Meta object code from reading C++ file 'dialogcategory.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogcategory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogcategory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogCategory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      53,   15,   15,   15, 0x08,
      83,   15,   15,   15, 0x08,
     112,   15,   15,   15, 0x08,
     140,   15,   15,   15, 0x08,
     168,   15,   15,   15, 0x08,
     206,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogCategory[] = {
    "DialogCategory\0\0on_toolButton_colorDefault_clicked()\0"
    "on_pushButton_color_clicked()\0"
    "on_pushButton_edit_clicked()\0"
    "on_pushButton_add_clicked()\0"
    "on_pushButton_del_clicked()\0"
    "on_tableWidget_itemSelectionChanged()\0"
    "checkConditions()\0"
};

void DialogCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogCategory *_t = static_cast<DialogCategory *>(_o);
        switch (_id) {
        case 0: _t->on_toolButton_colorDefault_clicked(); break;
        case 1: _t->on_pushButton_color_clicked(); break;
        case 2: _t->on_pushButton_edit_clicked(); break;
        case 3: _t->on_pushButton_add_clicked(); break;
        case 4: _t->on_pushButton_del_clicked(); break;
        case 5: _t->on_tableWidget_itemSelectionChanged(); break;
        case 6: _t->checkConditions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogCategory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogCategory::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogCategory,
      qt_meta_data_DialogCategory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogCategory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogCategory))
        return static_cast<void*>(const_cast< DialogCategory*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
