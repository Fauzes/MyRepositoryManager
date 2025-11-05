#ifndef STOEGEOBJECT_H
#define STOEGEOBJECT_H

#include <QObject>
#include "Interfacer/Storege/IStoegeObject.h"

class StoegeObject : public QObject, public IStoegeObject
{
    Q_OBJECT
public:
    explicit StoegeObject(QObject *parent = nullptr);
    explicit StoegeObject(types_storege_objects type, QString number, QObject *parent = nullptr);
    explicit StoegeObject(StoegeObject* obj);

    MyNumber* get_number() override;
    void set_number(MyNumber* number) override;

    DiscardedStatys* get_discardedStattus() override;
    void set_discardedStatus(DiscardedStatys* discarded) override;

    MyGeometry* get_geometry() override;
    void set_geometry(MyGeometry* geometry) override;

    FullStatus* get_fullStatus() override;
    void set_fullStatus(FullStatus* full) override;

    types_storege_objects get_type() override;


protected:
    //номер объекта для хранения
    MyNumber* number;
    //тип объета хранения
    types_storege_objects type;
    //заполнен ли объект
    FullStatus* isFull;
    //списан ли объект
    DiscardedStatys* isDiscarded;
    //размеры объекта
    MyGeometry* geometry;

    private:
    void make_obj();

signals:

};

#endif  STOEGEOBJECT_H
