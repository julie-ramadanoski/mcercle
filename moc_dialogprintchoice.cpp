/****************************************************************************
** Meta object code from reading C++ file 'dialogprintchoice.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/dialogprintchoice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogprintchoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogPrintChoice[] = {

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
      19,   18,   18,   18, 0x08,
      48,   18,   18,   18, 0x08,
      81,   18,   18,   18, 0x08,
     105,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogPrintChoice[] = {
    "DialogPrintChoice\0\0on_radioButton_pdf_clicked()\0"
    "on_radioButton_printer_clicked()\0"
    "on_buttonBox_accepted()\0"
    "on_toolButton_path_clicked()\0"
};

void DialogPrintChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogPrintChoice *_t = static_cast<DialogPrintChoice *>(_o);
        switch (_id) {
        case 0: _t->on_radioButton_pdf_clicked(); break;
        case 1: _t->on_radioButton_printer_clicked(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_toolButton_path_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogPrintChoice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogPrintChoice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogPrintChoice,
      qt_meta_data_DialogPrintChoice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogPrintChoice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogPrintChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogPrintChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogPrintChoice))
        return static_cast<void*>(const_cast< DialogPrintChoice*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogPrintChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
