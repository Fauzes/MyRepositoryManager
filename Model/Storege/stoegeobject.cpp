#include "stoegeobject.h"

StoegeObject::StoegeObject(QObject *parent) : QObject(parent)
{
    number = new MyNumber();
    make_obj();
}

StoegeObject::StoegeObject(types_storege_objects type, QString number, QObject *parent) : QObject(parent)
{
    this->type = type;
    this->number = new MyNumber(number);
    make_obj();
}

StoegeObject::StoegeObject(StoegeObject *obj)
{
    this->number = obj->number;
    this->type = obj->type;
    this->isFull = obj->isFull;
    this->isDiscarded = obj->isDiscarded;
    this->geometry = obj->geometry;
}

MyNumber* StoegeObject::get_number()
{
    return number;
}

void StoegeObject::set_number(MyNumber *number)
{
    delete this->number;
    this->number = new MyNumber(number);
}

DiscardedStatys *StoegeObject::get_discardedStattus()
{
    return isDiscarded;
}

void StoegeObject::set_discardedStatus(DiscardedStatys *discarded)
{
    delete isDiscarded;
    isDiscarded = new DiscardedStatys(discarded);
}

MyGeometry *StoegeObject::get_geometry()
{
    return geometry;
}

void StoegeObject::set_geometry(MyGeometry *geometry)
{
    delete this->geometry;
    this->geometry = new MyGeometry(geometry);
}

FullStatus *StoegeObject::get_fullStatus()
{
    return isFull;
}

void StoegeObject::set_fullStatus(FullStatus *full)
{
    delete isFull;
    isFull = new FullStatus(full);
}

types_storege_objects StoegeObject::get_type()
{
    return type;
}

void StoegeObject::make_obj()
{
    isFull = new FullStatus();
    isDiscarded = new DiscardedStatys();
    geometry = new MyGeometry();
}
