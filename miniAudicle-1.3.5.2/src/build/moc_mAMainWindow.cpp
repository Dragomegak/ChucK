/****************************************************************************
** Meta object code from reading C++ file 'mAMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/mAMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mAMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mAMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      21,   13,   13,   13, 0x0a,
      34,   29,   13,   13, 0x0a,
      52,   13,   13,   13, 0x2a,
      63,   13,   13,   13, 0x0a,
      76,   13,   13,   13, 0x0a,
      90,   13,   13,   13, 0x0a,
     100,   13,   13,   13, 0x0a,
     114,  112,   13,   13, 0x0a,
     129,   13,   13,   13, 0x0a,
     140,   13,   13,   13, 0x0a,
     155,  149,   13,   13, 0x0a,
     172,   13,   13,   13, 0x0a,
     193,   13,   13,   13, 0x0a,
     218,   13,   13,   13, 0x0a,
     242,   13,   13,   13, 0x0a,
     260,   13,   13,   13, 0x0a,
     278,   13,   13,   13, 0x0a,
     288,   13,   13,   13, 0x0a,
     308,   13,   13,   13, 0x0a,
     319,   13,   13,   13, 0x0a,
     333,   13,   13,   13, 0x0a,
     351,   13,   13,   13, 0x0a,
     372,   13,   13,   13, 0x0a,
     400,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mAMainWindow[] = {
    "mAMainWindow\0\0exit()\0about()\0path\0"
    "openFile(QString)\0openFile()\0openRecent()\0"
    "openExample()\0newFile()\0closeFile()\0"
    "i\0closeFile(int)\0saveFile()\0saveAs()\0"
    "index\0tabSelected(int)\0addCurrentDocument()\0"
    "replaceCurrentDocument()\0"
    "removeCurrentDocument()\0removeLastShred()\0"
    "removeAllShreds()\0clearVM()\0"
    "abortCurrentShred()\0toggleVM()\0"
    "setLogLevel()\0showPreferences()\0"
    "showConsoleMonitor()\0showVirtualMachineMonitor()\0"
    "showDeviceBrowser()\0"
};

void mAMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mAMainWindow *_t = static_cast<mAMainWindow *>(_o);
        switch (_id) {
        case 0: _t->exit(); break;
        case 1: _t->about(); break;
        case 2: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->openFile(); break;
        case 4: _t->openRecent(); break;
        case 5: _t->openExample(); break;
        case 6: _t->newFile(); break;
        case 7: _t->closeFile(); break;
        case 8: _t->closeFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->saveFile(); break;
        case 10: _t->saveAs(); break;
        case 11: _t->tabSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->addCurrentDocument(); break;
        case 13: _t->replaceCurrentDocument(); break;
        case 14: _t->removeCurrentDocument(); break;
        case 15: _t->removeLastShred(); break;
        case 16: _t->removeAllShreds(); break;
        case 17: _t->clearVM(); break;
        case 18: _t->abortCurrentShred(); break;
        case 19: _t->toggleVM(); break;
        case 20: _t->setLogLevel(); break;
        case 21: _t->showPreferences(); break;
        case 22: _t->showConsoleMonitor(); break;
        case 23: _t->showVirtualMachineMonitor(); break;
        case 24: _t->showDeviceBrowser(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mAMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mAMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mAMainWindow,
      qt_meta_data_mAMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mAMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mAMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mAMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mAMainWindow))
        return static_cast<void*>(const_cast< mAMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mAMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
