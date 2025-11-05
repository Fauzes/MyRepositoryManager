#ifndef __Shelf__
#define __Shelf__

#include <QObject>
#include <QList>
#include "Model/Storege/stoegeobject.h"
#include "Interfacer/Storege/IShelf_obj.h"

class Shelf : public StoegeObject, public IShelf_obj
{
    Q_OBJECT

    public:
    explicit Shelf(QObject *parent = nullptr);
    explicit Shelf(uint limit, QObject *parent = nullptr);
    explicit Shelf(Shelf* obj);

    void apend(Box_storege_obj* box) override;
    void remove(uint index) override;
    void remove(MyNumber* number) override;

    Box_storege_obj* find_box(uint index) override;
    uint find_box(MyNumber* number) override;   

    uint get_count_box() override;


    private:

    QList<Box_storege_obj> box_list;

};

#endif
