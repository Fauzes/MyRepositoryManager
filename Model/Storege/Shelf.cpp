#include "Shelf.h"

Shelf::Shelf(QObject *parent) : StoegeObject(parent)
{
    isFull->set_empty();
}

Shelf::Shelf(uint limit, QObject *parent) : StoegeObject(parent)
{
    isFull->set_empty();
    isFull->set_limit(limit);
}

Shelf::Shelf(Shelf *obj)
{
    this->box_list = obj->box_list;
}

void Shelf::apend(Box_storege_obj *box)
{
    box_list.append(*box);
}

void Shelf::remove(uint index)
{
    box_list.removeAt(index);
}

void Shelf::remove(MyNumber *number)
{
    box_list.removeAt(find_box(number));
}

Box_storege_obj *Shelf::find_box(uint index)
{
    return &box_list[index];
}

uint Shelf::find_box(MyNumber *number)
{
    for (uint i = 0; i < box_list.count(); i++)
    {
        if (box_list[i].get_number()->get_number() ==number->get_number())
        {
            return i;
        }
        
    }
}

uint Shelf::get_count_box()
{
    return box_list.count();
}
