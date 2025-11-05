#ifndef __MyGeometry__
#define __MyGeometry__

#include <QObject>
#include "Interfacer/base/IMyGeometry_obj.h"

class MyGeometry : public QObject, public IMyGeometry_obj
{
    Q_OBJECT
    
    public:
    explicit MyGeometry(QObject *parent = nullptr);
    explicit MyGeometry(float heigth, float width, float length, QObject *parent = nullptr);
    explicit MyGeometry(MyGeometry* obj);

    float get_heigth() override;
    float get_width() override;
    float get_length() override;

    void set_heigth(float heigth) override;
    void set_width(float width) override;
    void set_length(float length) override;

    private:
    float heigth;
    float width;
    float length;
};

#endif
