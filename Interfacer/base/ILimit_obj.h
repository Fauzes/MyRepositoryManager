#ifndef __ILimit_obj__
#define __ILimit_obj__

class ILimit_obj
{
    public:
    ILimit_obj();
    ~ILimit_obj();

    virtual void set_limit(unsigned int limit) = 0;
    virtual unsigned int get_limit() = 0;
};

ILimit_obj::ILimit_obj()
{
}

ILimit_obj::~ILimit_obj()
{
}


#endif
