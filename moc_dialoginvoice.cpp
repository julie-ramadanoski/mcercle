/****************************************************************************
** Meta object code from reading C++ file 'dialoginvoice.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialoginvoice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoginvoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogInvoice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      40,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   14,   14,   14, 0x08,
      79,   14,   14,   14, 0x08,
      97,   14,   14,   14, 0x08,
     135,   14,   14,   14, 0x08,
     173,  162,   14,   14, 0x08,
     209,   14,   14,   14, 0x08,
     236,   14,   14,   14, 0x08,
     264,   14,   14,   14, 0x08,
     298,   14,   14,   14, 0x08,
     334,   14,   14,   14, 0x08,
     361,   14,   14,   14, 0x08,
     388,   14,   14,   14, 0x08,
     418,   14,   14,   14, 0x08,
     448,   14,   14,   14, 0x08,
     470,   14,   14,   14, 0x08,
     492,   14,   14,   14, 0x08,
     526,  521,   14,   14, 0x08,
     565,   14,   14,   14, 0x08,
     594,   14,   14,   14, 0x08,
     623,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogInvoice[] = {
    "DialogInvoice\0\0askRefreshProposalList()\0"
    "askRefreshInvoiceList()\0calcul_Total()\0"
    "checkConditions()\0"
    "on_tableWidget_itemSelectionChanged()\0"
    "on_toolButton_rm_clicked()\0row,column\0"
    "on_tableWidget_cellChanged(int,int)\0"
    "on_pushButton_ok_clicked()\0"
    "on_toolButton_add_clicked()\0"
    "on_pushButton_createInv_clicked()\0"
    "on_toolButton_addFreeline_clicked()\0"
    "on_toolButton_up_clicked()\0"
    "on_toolButton_dn_clicked()\0"
    "on_pushButton_print_clicked()\0"
    "on_pushButton_close_clicked()\0"
    "addFreeline_Service()\0addFreeline_Product()\0"
    "on_toolButton_hide_clicked()\0type\0"
    "on_pushButton_partInvoice_clicked(int)\0"
    "create_service_partInvoice()\0"
    "create_product_partInvoice()\0"
    "on_pushButton_creditInvoice_clicked()\0"
};

void DialogInvoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogInvoice *_t = static_cast<DialogInvoice *>(_o);
        switch (_id) {
        case 0: _t->askRefreshProposalList(); break;
        case 1: _t->askRefreshInvoiceList(); break;
        case 2: _t->calcul_Total(); break;
        case 3: _t->checkConditions(); break;
        case 4: _t->on_tableWidget_itemSelectionChanged(); break;
        case 5: _t->on_toolButton_rm_clicked(); break;
        case 6: _t->on_tableWidget_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_pushButton_ok_clicked(); break;
        case 8: _t->on_toolButton_add_clicked(); break;
        case 9: _t->on_pushButton_createInv_clicked(); break;
        case 10: _t->on_toolButton_addFreeline_clicked(); break;
        case 11: _t->on_toolButton_up_clicked(); break;
        case 12: _t->on_toolButton_dn_clicked(); break;
        case 13: _t->on_pushButton_print_clicked(); break;
        case 14: _t->on_pushButton_close_clicked(); break;
        case 15: _t->addFreeline_Service(); break;
        case 16: _t->addFreeline_Product(); break;
        case 17: _t->on_toolButton_hide_clicked(); break;
        case 18: _t->on_pushButton_partInvoice_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->create_service_partInvoice(); break;
        case 20: _t->create_product_partInvoice(); break;
        case 21: _t->on_pushButton_creditInvoice_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogInvoice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogInvoice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogInvoice,
      qt_meta_data_DialogInvoice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogInvoice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogInvoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogInvoice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogInvoice))
        return static_cast<void*>(const_cast< DialogInvoice*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogInvoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void DialogInvoice::askRefreshProposalList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DialogInvoice::askRefreshInvoiceList()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
