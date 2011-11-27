/****************************************************************************
** Meta object code from reading C++ file 'tundrahost.h'
**
** Created: Thu 17. Nov 12:36:31 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tundrahost.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tundrahost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TundraHost[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TundraHost[] = {
    "TundraHost\0\0on_pbStatus_clicked()\0"
    "trayIconClicked(QSystemTrayIcon::ActivationReason)\0"
    "acceptConnection()\0startRead()\0"
};

const QMetaObject TundraHost::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TundraHost,
      qt_meta_data_TundraHost, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TundraHost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TundraHost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TundraHost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TundraHost))
        return static_cast<void*>(const_cast< TundraHost*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TundraHost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbStatus_clicked(); break;
        case 1: trayIconClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: acceptConnection(); break;
        case 3: startRead(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
