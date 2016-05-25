/****************************************************************************
** Meta object code from reading C++ file 'printc.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/printc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Printc[] = {

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
      16,    8,    7,    7, 0x08,
      51,    8,    7,    7, 0x08,
      85,    8,    7,    7, 0x08,
     119,    8,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Printc[] = {
    "Printc\0\0printer\0on_paintPrinterProposal(QPrinter*)\0"
    "on_paintPrinterInvoice(QPrinter*)\0"
    "on_paintPrinterService(QPrinter*)\0"
    "on_paintPrinter_fileEmpty(QPrinter*)\0"
};

void Printc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Printc *_t = static_cast<Printc *>(_o);
        switch (_id) {
        case 0: _t->on_paintPrinterProposal((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->on_paintPrinterInvoice((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 2: _t->on_paintPrinterService((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 3: _t->on_paintPrinter_fileEmpty((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Printc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Printc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Printc,
      qt_meta_data_Printc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Printc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Printc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Printc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Printc))
        return static_cast<void*>(const_cast< Printc*>(this));
    return QObject::qt_metacast(_clname);
}

int Printc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
