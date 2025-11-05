#ifndef __IStoegeObject__
#define __IStoegeObject__

#include "Model/base/MyNumber.h"
#include "Model/Storege/types_storege_objects.h"
#include "Model/base/DiscardedStatys.h"
#include "Model/base/MyGeometry.h"
#include "Model/base/FullStatus.h"

class IStoegeObject
{
    public:
    IStoegeObject();
    ~IStoegeObject();

    virtual MyNumber* get_number() = 0;
    virtual DiscardedStatys* get_discardedStattus() = 0;
    virtual MyGeometry* get_geometry() = 0;
    virtual FullStatus* get_fullStatus() = 0;
    virtual types_storege_objects get_type() = 0;

    virtual void set_number(MyNumber* number) = 0;
    virtual void set_discardedStatus(DiscardedStatys* discarded) = 0;
    virtual void set_geometry(MyGeometry* geometry) = 0;
    virtual void set_fullStatus(FullStatus* full) = 0;
};

IStoegeObject::IStoegeObject()
{
}

IStoegeObject::~IStoegeObject()
{
}


#endif
