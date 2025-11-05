#ifndef __IShelf_obj__
#define __IShelf_obj__

#include "Model/Storege/box_storege_obj.h"
#include "Model/base/MyNumber.h"

class IShelf_obj
{
    public:
    IShelf_obj();
    ~IShelf_obj();

    virtual void apend(Box_storege_obj* box) = 0;
    virtual void remove(uint index) = 0;
    virtual void remove(MyNumber* number) = 0;

    virtual Box_storege_obj* find_box(uint index) = 0;
    virtual uint find_box(MyNumber* number) = 0;

    virtual uint get_count_box() = 0;
};

IShelf_obj::IShelf_obj()
{
}

IShelf_obj::~IShelf_obj()
{
}

#endif
