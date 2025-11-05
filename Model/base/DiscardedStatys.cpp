#include "DiscardedStatys.h"

DiscardedStatys::DiscardedStatys(QObject *parent) : QObject(parent)
{
    isDiscarded = false;
}

DiscardedStatys::DiscardedStatys(DiscardedStatys *obj)
{
    this->isDiscarded = obj->isDiscarded;
}

void DiscardedStatys::discard()
{
    isDiscarded = true;
}

bool DiscardedStatys::get_isDiscarded()
{
    return isDiscarded;
}
