/****************************************************************************
** Meta object code from reading C++ file 'dialoginvoicelist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialoginvoicelist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoginvoicelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogInvoiceList[] = {

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
      24,   19,   18,   18, 0x08,
      55,   18,   18,   18, 0x08,
      82,   18,   18,   18, 0x08,
     120,  112,   18,   18, 0x08,
     147,   18,   18,   18, 0x08,
     178,   18,   18,   18, 0x08,
     208,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogInvoiceList[] = {
    "DialogInvoiceList\0\0date\0"
    "on_dateEdit_dateChanged(QDate)\0"
    "on_pushButton_ok_clicked()\0"
    "on_pushButton_print_clicked()\0printer\0"
    "on_paintPrinter(QPrinter*)\0"
    "on_toolButton_selAll_clicked()\0"
    "on_toolButton_unSel_clicked()\0"
    "on_pushButton_printAll_clicked()\0"
};

void DialogInvoiceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogInvoiceList *_t = static_cast<DialogInvoiceList *>(_o);
        switch (_id) {
        case 0: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_ok_clicked(); break;
        case 2: _t->on_pushButton_print_clicked(); break;
        case 3: _t->on_paintPrinter((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 4: _t->on_toolButton_selAll_clicked(); break;
        case 5: _t->on_toolButton_unSel_clicked(); break;
        case 6: _t->on_pushButton_printAll_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogInvoiceList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogInvoiceList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogInvoiceList,
      qt_meta_data_DialogInvoiceList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogInvoiceList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogInvoiceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogInvoiceList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogInvoiceList))
        return static_cast<void*>(const_cast< DialogInvoiceList*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogInvoiceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
