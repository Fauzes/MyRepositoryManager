#ifndef WARDROBE_STOREGE_OBJ_H
#define WARDROBE_STOREGE_OBJ_H

#include "stoegeobject.h"
#include <QList>
#include "Model/base/MyGeometry.h"
#include "Model/Storege/Shelf.h"


class Wardrobe_storege_obj : public StoegeObject
{
public:
    Wardrobe_storege_obj();
    Wardrobe_storege_obj(uint number, float heigth, float width, float length, uint countShelf);

    uint get_countShelf();
    float get_heigth();
    float get_width();
    float get_length();

private:
    MyGeometry geometry;
    QList<Shelf> shelfs;
};

#endif // WARDROBE_STOREGE_OBJ_H
