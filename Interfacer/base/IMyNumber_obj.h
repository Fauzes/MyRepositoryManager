#ifndef __IMyNumber_obj__
#define __IMyNumber_obj__

#include <QString>

class IMyNumber_obj
{
    public:
    IMyNumber_obj();
    ~IMyNumber_obj();

    virtual QString get_number() = 0;
    virtual void set_number(QString number) = 0;
    virtual uint get_type() = 0;
    virtual uint get_class() = 0;
    virtual uint get_size() = 0;
    virtual uint get_sequence_number() = 0;
    virtual uint get_count() = 0;
    virtual QString get_mod() = 0;
};

IMyNumber_obj::IMyNumber_obj()
{
}

IMyNumber_obj::~IMyNumber_obj()
{
}


#endif
