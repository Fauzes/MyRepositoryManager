#include "MyNumber.h"

MyNumber::MyNumber(QObject *parent) : QObject(parent)
{
}

MyNumber::MyNumber(QString number, QObject *parent) : QObject(parent)
{
    this->number = number;
}

MyNumber::MyNumber(MyNumber *obj)
{
    this->number = obj->number;
}

QString MyNumber::get_number()
{
    return number;
}

void MyNumber::set_number(QString number)
{
    this->number = number;
}

uint MyNumber::get_type()
{
    return number.mid(START_TYPE_INDEX, LEN_SUB_PART).toInt();
}

uint MyNumber::get_class()
{
    return number.mid(START_CLASS_INDEX, LEN_SUB_PART).toInt();
}

uint MyNumber::get_size()
{
    return number.mid(START_SIZE_INDEX, LEN_SUB_PART).toInt();
}

uint MyNumber::get_sequence_number()
{
    return number.mid(START_SEQUENCE_NUMBER_INDEX, LEN_SUB_PART).toInt();
}

uint MyNumber::get_count()
{
    return number.mid(START_COUNT_INDEX, LEN_SUB_PART).toInt();
}

QString MyNumber::get_mod()
{
    return number.mid(START_MOD_INDEX, LEN_SUB_PART);
}
