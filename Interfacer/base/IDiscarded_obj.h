#ifndef __IDiscarded_obj__
#define __IDiscarded_obj__

class IDiscarded_obj
{
    public:
    IDiscarded_obj();
    ~IDiscarded_obj();

    virtual void discard() = 0;
    virtual bool get_isDiscarded() = 0;
};

IDiscarded_obj::IDiscarded_obj()
{
}

IDiscarded_obj::~IDiscarded_obj()
{
}


#endif
