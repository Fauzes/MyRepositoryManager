#ifndef BOX_STOREGE_OBJ_H
#define BOX_STOREGE_OBJ_H

#include "stoegeobject.h"

class Box_storege_obj :  public StoegeObject
{
public:
    Box_storege_obj(QString brife, uint number, types_storege_objects size);

    QString get_brife();

private:
    //шифр ящика
    QString brife;
};

#endif // BOX_STOREGE_OBJ_H
