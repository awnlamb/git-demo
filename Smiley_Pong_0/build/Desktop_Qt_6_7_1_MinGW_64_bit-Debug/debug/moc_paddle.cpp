/****************************************************************************
** Meta object code from reading C++ file 'paddle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paddle.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paddle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPaddleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPaddleENDCLASS = QtMocHelpers::stringData(
    "Paddle",
    "height",
    "width",
    "MoveType",
    "UP",
    "DOWN"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPaddleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015001, uint(-1), 0,
       2, QMetaType::Int, 0x00015001, uint(-1), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    2,   29,

 // enum data: key, value
       4, uint(Paddle::UP),
       5, uint(Paddle::DOWN),

       0        // eod
};

Q_CONSTINIT const QMetaObject Paddle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPaddleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPaddleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPaddleENDCLASS_t,
        // property 'height'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'width'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'MoveType'
        QtPrivate::TypeAndForceComplete<Paddle::MoveType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Paddle, std::true_type>
    >,
    nullptr
} };

void Paddle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Paddle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->width(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Paddle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Paddle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPaddleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Paddle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
