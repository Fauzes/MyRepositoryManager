#ifndef __FullStatus__
#define __FullStatus__

#include <QOBject>
#include "Interfacer/base/IFull_obj.h"
#include "Interfacer/base/ILimit_obj.h"

class FullStatus : public QObject, public IFull_obj, public ILimit_obj
{
    Q_OBJECT
    public:
    explicit FullStatus(QObject *parent = nullptr);
    explicit FullStatus(uint limit, QObject *parent = nullptr);
    explicit FullStatus(FullStatus* obj);

    void set_full() override;
    void set_empty() override;
    void set_limit(uint limit) override;

    bool get_status() override;
    uint get_limit() override;

    private:
    bool isFull;
    uint limit;

};

#endif
