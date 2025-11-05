#ifndef __IFull_obj__
#define __IFull_obj__

class IFull_obj
{
    public:
    IFull_obj();
    ~IFull_obj();

    virtual void set_full() = 0;
    virtual void set_empty() = 0;
    virtual bool get_status() = 0;
};

IFull_obj::IFull_obj()
{
}

IFull_obj::~IFull_obj()
{
}


#endif