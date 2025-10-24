#ifndef WARDROBE_STOREGE_OBJ_H
#define WARDROBE_STOREGE_OBJ_H

#include "stoegeobject.h"

class Wardrobe_storege_obj : public StoegeObject
{
public:
    Wardrobe_storege_obj();
    Wardrobe_storege_obj(uint number, uint heigth, uint width, uint length, uint countShelf);

    uint get_heigth ();
    uint get_width();
    uint get_length();
    uint get_countShelf();

private:
    uint heigth;
    uint width;
    uint length;
    uint countShelf;
};

#endif // WARDROBE_STOREGE_OBJ_H
