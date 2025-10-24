#include "stoegeobject.h"

StoegeObject::StoegeObject(QObject *parent) : QObject(parent)
{

}

StoegeObject::StoegeObject(types_storege_objects type, uint number, QObject *parent) : QObject(parent)
{
    this->type = type;
    this->number = number;
    isFull = false;
    isDiscarded = false;
}

uint StoegeObject::get_number()
{
    return number;
}

types_storege_objects StoegeObject::get_type()
{
    return type;
}

bool StoegeObject::get_isFull()
{
    return isFull;
}

bool StoegeObject::get_isDiscarded()
{
    return  isDiscarded;
}

void StoegeObject::set_isFull(bool full)
{
    isFull = full;
}

void StoegeObject::set_isDiscarded()
{
    isDiscarded = true;
}
