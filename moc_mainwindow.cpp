/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     202,   11,   11,   11, 0x08,
     238,   11,   11,   11, 0x08,
     274,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     409,   11,   11,   11, 0x08,
     444,   11,   11,   11, 0x08,
     466,   11,   11,   11, 0x08,
     498,   11,   11,   11, 0x08,
     531,   11,   11,   11, 0x08,
     564,   11,   11,   11, 0x08,
     600,   11,   11,   11, 0x08,
     637,   11,   11,   11, 0x08,
     684,   11,   11,   11, 0x08,
     720,   11,   11,   11, 0x08,
     757,   11,   11,   11, 0x0a,
     772,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionConfiguration_triggered()\0"
    "on_actionA_propos_triggered()\0"
    "on_actionProduits_triggered()\0"
    "on_actionClients_triggered()\0"
    "on_actionTableau_de_bord_triggered()\0"
    "on_actionQuitter_triggered()\0"
    "on_actionA_propos_de_Qt_triggered()\0"
    "on_actionActionProvider_triggered()\0"
    "on_actionLivres_des_Recettes_triggered()\0"
    "on_actionSauvegarder_la_base_de_donn_es_sous_triggered()\0"
    "on_actionServices_common_triggered()\0"
    "on_actionOuvrir_BddDir_triggered()\0"
    "on_action_triggered()\0"
    "on_actionClients_ex_triggered()\0"
    "on_actionProduits_ex_triggered()\0"
    "on_actionServices_ex_triggered()\0"
    "on_actionFournisseur_ex_triggered()\0"
    "on_actionSignaler_un_bug_triggered()\0"
    "on_actionImprimer_une_fiche_Ent_te_triggered()\0"
    "on_actionClients_import_triggered()\0"
    "on_actionProduits_import_triggered()\0"
    "RefreshLists()\0RefreshActivation()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionConfiguration_triggered(); break;
        case 1: _t->on_actionA_propos_triggered(); break;
        case 2: _t->on_actionProduits_triggered(); break;
        case 3: _t->on_actionClients_triggered(); break;
        case 4: _t->on_actionTableau_de_bord_triggered(); break;
        case 5: _t->on_actionQuitter_triggered(); break;
        case 6: _t->on_actionA_propos_de_Qt_triggered(); break;
        case 7: _t->on_actionActionProvider_triggered(); break;
        case 8: _t->on_actionLivres_des_Recettes_triggered(); break;
        case 9: _t->on_actionSauvegarder_la_base_de_donn_es_sous_triggered(); break;
        case 10: _t->on_actionServices_common_triggered(); break;
        case 11: _t->on_actionOuvrir_BddDir_triggered(); break;
        case 12: _t->on_action_triggered(); break;
        case 13: _t->on_actionClients_ex_triggered(); break;
        case 14: _t->on_actionProduits_ex_triggered(); break;
        case 15: _t->on_actionServices_ex_triggered(); break;
        case 16: _t->on_actionFournisseur_ex_triggered(); break;
        case 17: _t->on_actionSignaler_un_bug_triggered(); break;
        case 18: _t->on_actionImprimer_une_fiche_Ent_te_triggered(); break;
        case 19: _t->on_actionClients_import_triggered(); break;
        case 20: _t->on_actionProduits_import_triggered(); break;
        case 21: _t->RefreshLists(); break;
        case 22: _t->RefreshActivation(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
