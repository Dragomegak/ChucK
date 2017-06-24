/****************************************************************************
** Meta object code from reading C++ file 'mAPreferencesWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/mAPreferencesWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mAPreferencesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mAPreferencesWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   20,   20,   20, 0x0a,
      47,   20,   20,   20, 0x0a,
      56,   20,   20,   20, 0x0a,
      74,   20,   20,   20, 0x0a,
      94,   20,   20,   20, 0x0a,
     123,   20,   20,   20, 0x0a,
     151,   20,   20,   20, 0x0a,
     179,   20,   20,   20, 0x0a,
     207,   20,   20,   20, 0x0a,
     228,   20,   20,   20, 0x0a,
     240,   20,   20,   20, 0x0a,
     255,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mAPreferencesWindow[] = {
    "mAPreferencesWindow\0\0preferencesChanged()\0"
    "ok()\0cancel()\0restoreDefaults()\0"
    "ProbeAudioDevices()\0SelectedAudioOutputChanged()\0"
    "SelectedAudioInputChanged()\0"
    "syntaxColoringTypeChanged()\0"
    "syntaxColoringChangeColor()\0"
    "syntaxColorChanged()\0addChugin()\0"
    "removeChugin()\0changeCurrentDirectory()\0"
};

void mAPreferencesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mAPreferencesWindow *_t = static_cast<mAPreferencesWindow *>(_o);
        switch (_id) {
        case 0: _t->preferencesChanged(); break;
        case 1: _t->ok(); break;
        case 2: _t->cancel(); break;
        case 3: _t->restoreDefaults(); break;
        case 4: _t->ProbeAudioDevices(); break;
        case 5: _t->SelectedAudioOutputChanged(); break;
        case 6: _t->SelectedAudioInputChanged(); break;
        case 7: _t->syntaxColoringTypeChanged(); break;
        case 8: _t->syntaxColoringChangeColor(); break;
        case 9: _t->syntaxColorChanged(); break;
        case 10: _t->addChugin(); break;
        case 11: _t->removeChugin(); break;
        case 12: _t->changeCurrentDirectory(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mAPreferencesWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mAPreferencesWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mAPreferencesWindow,
      qt_meta_data_mAPreferencesWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mAPreferencesWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mAPreferencesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mAPreferencesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mAPreferencesWindow))
        return static_cast<void*>(const_cast< mAPreferencesWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int mAPreferencesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void mAPreferencesWindow::preferencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
