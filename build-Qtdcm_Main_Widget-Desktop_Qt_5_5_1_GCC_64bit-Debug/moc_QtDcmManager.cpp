/****************************************************************************
** Meta object code from reading C++ file 'QtDcmManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qtdcm_Main_Widget/QtDcmManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtDcmManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtDcmManager_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDcmManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDcmManager_t qt_meta_stringdata_QtDcmManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QtDcmManager"
QT_MOC_LITERAL(1, 13, 10), // "serieMoved"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "directory"
QT_MOC_LITERAL(4, 35, 14), // "importFinished"
QT_MOC_LITERAL(5, 50, 14), // "gettingPreview"
QT_MOC_LITERAL(6, 65, 17), // "updateProgressBar"
QT_MOC_LITERAL(7, 83, 1), // "i"
QT_MOC_LITERAL(8, 85, 18), // "moveSeriesFinished"
QT_MOC_LITERAL(9, 104, 11), // "makePreview"
QT_MOC_LITERAL(10, 116, 8), // "filename"
QT_MOC_LITERAL(11, 125, 12), // "onSerieMoved"
QT_MOC_LITERAL(12, 138, 3), // "uid"
QT_MOC_LITERAL(13, 142, 6), // "number"
QT_MOC_LITERAL(14, 149, 20), // "importSelectedSeries"
QT_MOC_LITERAL(15, 170, 17) // "importToDirectory"

    },
    "QtDcmManager\0serieMoved\0\0directory\0"
    "importFinished\0gettingPreview\0"
    "updateProgressBar\0i\0moveSeriesFinished\0"
    "makePreview\0filename\0onSerieMoved\0uid\0"
    "number\0importSelectedSeries\0"
    "importToDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDcmManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   64,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      11,    3,   71,    2, 0x0a /* Public */,
      14,    0,   78,    2, 0x0a /* Public */,
      15,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QtDcmManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtDcmManager *_t = static_cast<QtDcmManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serieMoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->importFinished(); break;
        case 2: _t->gettingPreview(); break;
        case 3: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->moveSeriesFinished(); break;
        case 5: _t->makePreview((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onSerieMoved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->importSelectedSeries(); break;
        case 8: _t->importToDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtDcmManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDcmManager::serieMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (QtDcmManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDcmManager::importFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (QtDcmManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDcmManager::gettingPreview)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QtDcmManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDcmManager.data,
      qt_meta_data_QtDcmManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtDcmManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDcmManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtDcmManager.stringdata0))
        return static_cast<void*>(const_cast< QtDcmManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QtDcmManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtDcmManager::serieMoved(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDcmManager::importFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QtDcmManager::gettingPreview()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
