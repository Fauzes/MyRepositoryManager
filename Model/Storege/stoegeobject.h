#ifndef STOEGEOBJECT_H
#define STOEGEOBJECT_H

#include <QObject>
#include "types_storege_objects.h"

class StoegeObject : public QObject
{
    Q_OBJECT
public:
    explicit StoegeObject(QObject *parent = nullptr);
    StoegeObject(types_storege_objects type, uint number, QObject *parent = nullptr);

    uint get_number();
    types_storege_objects get_type();
    bool get_isFull();
    bool get_isDiscarded();

    void set_isFull(bool full);
    void set_isDiscarded();

private:
    //номер объекта для хранения
    uint number;
    //тип объета хранения
    types_storege_objects type;
    //заполнен ли объект
    bool isFull;
    //списан ли объект
    bool isDiscarded;

signals:

};

#endif // STOEGEOBJECT_H
