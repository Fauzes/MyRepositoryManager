#include "box_storege_obj.h"

Box_storege_obj::Box_storege_obj(QString brife, uint number, types_storege_objects size) : StoegeObject(size, number)
{
    this->brife = brife;
}

QString Box_storege_obj::get_brife()
{
    return brife;
}
