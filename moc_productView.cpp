/****************************************************************************
** Meta object code from reading C++ file 'productView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/productView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'productView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_productView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      47,   12,   12,   12, 0x08,
      77,   12,   12,   12, 0x08,
     108,   12,   12,   12, 0x08,
     158,  150,   12,   12, 0x08,
     201,   12,   12,   12, 0x08,
     248,   12,   12,   12, 0x08,
     284,   12,   12,   12, 0x08,
     319,   12,   12,   12, 0x08,
     365,  357,   12,   12, 0x08,
     404,  357,   12,   12, 0x08,
     442,   12,   12,   12, 0x08,
     475,   12,   12,   12, 0x08,
     508,   12,   12,   12, 0x08,
     541,   12,   12,   12, 0x08,
     575,   12,   12,   12, 0x08,
     625,  619,   12,   12, 0x08,
     673,  668,   12,   12, 0x08,
     720,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_productView[] = {
    "productView\0\0on_toolButton_printInfo_clicked()\0"
    "on_toolButton_print_clicked()\0"
    "on_toolButton_remove_clicked()\0"
    "on_lineEdit_searchProduct_returnPressed()\0"
    "checked\0on_checkBox_viewDiscontinued_clicked(bool)\0"
    "on_tableWidget_products_itemSelectionChanged()\0"
    "on_toolButton_editProduct_clicked()\0"
    "on_toolButton_addProduct_clicked()\0"
    "on_toolButton_searchProduct_clicked()\0"
    "printer\0on_paintPrinterListingStock(QPrinter*)\0"
    "on_paintPrinterInfoProduct(QPrinter*)\0"
    "on_lineEdit_page_returnPressed()\0"
    "on_toolButton_pagePrev_clicked()\0"
    "on_toolButton_pageNext_clicked()\0"
    "on_toolButton_clipboard_clicked()\0"
    "on_tableWidget_products_itemDoubleClicked()\0"
    "index\0on_comboBoxFiltre_currentIndexChanged(int)\0"
    "arg1\0on_lineEdit_searchProduct_textChanged(QString)\0"
    "refreshProductsList()\0"
};

void productView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        productView *_t = static_cast<productView *>(_o);
        switch (_id) {
        case 0: _t->on_toolButton_printInfo_clicked(); break;
        case 1: _t->on_toolButton_print_clicked(); break;
        case 2: _t->on_toolButton_remove_clicked(); break;
        case 3: _t->on_lineEdit_searchProduct_returnPressed(); break;
        case 4: _t->on_checkBox_viewDiscontinued_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_tableWidget_products_itemSelectionChanged(); break;
        case 6: _t->on_toolButton_editProduct_clicked(); break;
        case 7: _t->on_toolButton_addProduct_clicked(); break;
        case 8: _t->on_toolButton_searchProduct_clicked(); break;
        case 9: _t->on_paintPrinterListingStock((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 10: _t->on_paintPrinterInfoProduct((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 11: _t->on_lineEdit_page_returnPressed(); break;
        case 12: _t->on_toolButton_pagePrev_clicked(); break;
        case 13: _t->on_toolButton_pageNext_clicked(); break;
        case 14: _t->on_toolButton_clipboard_clicked(); break;
        case 15: _t->on_tableWidget_products_itemDoubleClicked(); break;
        case 16: _t->on_comboBoxFiltre_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_lineEdit_searchProduct_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->refreshProductsList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData productView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject productView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_productView,
      qt_meta_data_productView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &productView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *productView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *productView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_productView))
        return static_cast<void*>(const_cast< productView*>(this));
    return QWidget::qt_metacast(_clname);
}

int productView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
