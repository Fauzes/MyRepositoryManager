#include "MyGeometry.h"

MyGeometry::MyGeometry(QObject *parent) : QObject(parent)
{
}

MyGeometry::MyGeometry(float heigth, float width, float length, QObject *parent) : QObject(parent)
{
    set_heigth(heigth);
    set_length(length);
    set_width(width);
}

MyGeometry::MyGeometry(MyGeometry *obj)
{
    this->width = obj->width;
    this->length = obj->length;
    this->heigth = obj->heigth;
}

float MyGeometry::get_heigth()
{
    return heigth;
}

float MyGeometry::get_width()
{
    return width;
}

float MyGeometry::get_length()
{
    return length;
}

void MyGeometry::set_heigth(float heigth)
{
    this->heigth = heigth;
}

void MyGeometry::set_width(float width)
{
    this->width = width;
}

void MyGeometry::set_length(float length)
{
    this->length = length;
}
