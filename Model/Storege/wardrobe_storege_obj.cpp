#include "wardrobe_storege_obj.h"

Wardrobe_storege_obj::Wardrobe_storege_obj()
{

}

Wardrobe_storege_obj::Wardrobe_storege_obj(uint number, uint heigth, uint width, uint length, uint countShelf) : StoegeObject(wardrobe_obj, number)
{
    this->heigth = heigth;
    this->width = width;
    this->length = length;
    this->countShelf = countShelf;
}

uint Wardrobe_storege_obj::get_heigth()
{
    return heigth;
}

uint Wardrobe_storege_obj::get_width()
{
    return width;
}

uint Wardrobe_storege_obj::get_length()
{
    return length;
}

uint Wardrobe_storege_obj::get_countShelf()
{
    return countShelf;
}
