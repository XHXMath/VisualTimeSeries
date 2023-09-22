/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TimeSeriesGenerator/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(59, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(84, 4), // "arg1"
QT_MOC_LITERAL(89, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(116, 26), // "on_checkBox_3_stateChanged"
QT_MOC_LITERAL(143, 26), // "on_checkBox_4_stateChanged"
QT_MOC_LITERAL(170, 26), // "on_checkBox_5_stateChanged"
QT_MOC_LITERAL(197, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(220, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(245, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(270, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(295, 24), // "on_radioButton_5_clicked"
QT_MOC_LITERAL(320, 24), // "on_radioButton_6_clicked"
QT_MOC_LITERAL(345, 24), // "on_radioButton_7_clicked"
QT_MOC_LITERAL(370, 24), // "on_radioButton_8_clicked"
QT_MOC_LITERAL(395, 24) // "on_radioButton_9_clicked"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_actionAbout_triggered\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_checkBox_2_stateChanged\0"
    "on_checkBox_3_stateChanged\0"
    "on_checkBox_4_stateChanged\0"
    "on_checkBox_5_stateChanged\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_radioButton_5_clicked\0"
    "on_radioButton_6_clicked\0"
    "on_radioButton_7_clicked\0"
    "on_radioButton_8_clicked\0"
    "on_radioButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    1,  112,    2, 0x08,    3 /* Private */,
       6,    1,  115,    2, 0x08,    5 /* Private */,
       7,    1,  118,    2, 0x08,    7 /* Private */,
       8,    1,  121,    2, 0x08,    9 /* Private */,
       9,    1,  124,    2, 0x08,   11 /* Private */,
      10,    0,  127,    2, 0x08,   13 /* Private */,
      11,    0,  128,    2, 0x08,   14 /* Private */,
      12,    0,  129,    2, 0x08,   15 /* Private */,
      13,    0,  130,    2, 0x08,   16 /* Private */,
      14,    0,  131,    2, 0x08,   17 /* Private */,
      15,    0,  132,    2, 0x08,   18 /* Private */,
      16,    0,  133,    2, 0x08,   19 /* Private */,
      17,    0,  134,    2, 0x08,   20 /* Private */,
      18,    0,  135,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_actionAbout_triggered(); break;
        case 2: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_checkBox_4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_clicked(); break;
        case 8: _t->on_radioButton_2_clicked(); break;
        case 9: _t->on_radioButton_3_clicked(); break;
        case 10: _t->on_radioButton_4_clicked(); break;
        case 11: _t->on_radioButton_5_clicked(); break;
        case 12: _t->on_radioButton_6_clicked(); break;
        case 13: _t->on_radioButton_7_clicked(); break;
        case 14: _t->on_radioButton_8_clicked(); break;
        case 15: _t->on_radioButton_9_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
