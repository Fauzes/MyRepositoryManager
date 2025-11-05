#include "wardrobe_storege_obj.h"

Wardrobe_storege_obj::Wardrobe_storege_obj()
{

}

Wardrobe_storege_obj::Wardrobe_storege_obj(uint number, float heigth, float width, float length, uint countShelf) : StoegeObject(wardrobe_obj, number)
{
    geometry.set_heigth(heigth);
    geometry.set_length(length);
    geometry.set_width(width);

    //добавить добавление полок
}

float Wardrobe_storege_obj::get_heigth()
{
    return geometry.get_heigth();
}

float Wardrobe_storege_obj::get_width()
{
    return geometry.get_width();
}

float Wardrobe_storege_obj::get_length()
{
    return geometry.get_length();
}

uint Wardrobe_storege_obj::get_countShelf()
{
    return shelfs.count();
}
