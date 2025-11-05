#include "FullStatus.h"

FullStatus::FullStatus(QObject *parent) : QObject(parent)
{
}

FullStatus::FullStatus(uint limit, QObject *parent) : QObject(parent)
{
    set_limit(limit);
}

FullStatus::FullStatus(FullStatus *obj)
{
    this->isFull = obj->isFull;
    this->limit = obj->limit;
}

void FullStatus::set_full()
{
    this->isFull = true;
}

void FullStatus::set_empty()
{
    this->isFull = false;
}

void FullStatus::set_limit(uint limit)
{
    this->limit = limit;
}

bool FullStatus::get_status()
{
    return isFull;
}

uint FullStatus::get_limit()
{
    return limit;
}
