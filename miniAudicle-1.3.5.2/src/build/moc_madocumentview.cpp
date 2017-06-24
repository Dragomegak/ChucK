/****************************************************************************
** Meta object code from reading C++ file 'madocumentview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/madocumentview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'madocumentview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mADocumentView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      23,   15,   15,   15, 0x05,
      30,   15,   15,   15, 0x05,
      36,   15,   15,   15, 0x05,
      43,   15,   15,   15, 0x05,
      51,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   63,   15,   15, 0x0a,
     102,   95,   15,   15, 0x0a,
     146,   15,   15,   15, 0x0a,
     167,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mADocumentView[] = {
    "mADocumentView\0\0undo()\0redo()\0cut()\0"
    "copy()\0paste()\0selectAll()\0modified\0"
    "documentModified(bool)\0button\0"
    "readOnlySaveDialogClicked(QAbstractButton*)\0"
    "preferencesChanged()\0exportAsWav()\0"
};

void mADocumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mADocumentView *_t = static_cast<mADocumentView *>(_o);
        switch (_id) {
        case 0: _t->undo(); break;
        case 1: _t->redo(); break;
        case 2: _t->cut(); break;
        case 3: _t->copy(); break;
        case 4: _t->paste(); break;
        case 5: _t->selectAll(); break;
        case 6: _t->documentModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->readOnlySaveDialogClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 8: _t->preferencesChanged(); break;
        case 9: _t->exportAsWav(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mADocumentView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mADocumentView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mADocumentView,
      qt_meta_data_mADocumentView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mADocumentView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mADocumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mADocumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mADocumentView))
        return static_cast<void*>(const_cast< mADocumentView*>(this));
    return QWidget::qt_metacast(_clname);
}

int mADocumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void mADocumentView::undo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mADocumentView::redo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void mADocumentView::cut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void mADocumentView::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void mADocumentView::paste()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void mADocumentView::selectAll()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
