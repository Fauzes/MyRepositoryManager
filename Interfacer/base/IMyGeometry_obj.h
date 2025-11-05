#ifndef __IMyGeometry_obj__
#define __IMyGeometry_obj__

class IMyGeometry_obj
{
    public:
    IMyGeometry_obj();
    ~IMyGeometry_obj();

    virtual float get_heigth() = 0;
    virtual float get_width() = 0;
    virtual float get_length() = 0;
    
    virtual void set_heigth(float heigth) = 0;
    virtual void set_width(float width) = 0;
    virtual void set_length(float length) = 0;
};

IMyGeometry_obj::IMyGeometry_obj()
{
}

IMyGeometry_obj::~IMyGeometry_obj()
{
}


#endif
