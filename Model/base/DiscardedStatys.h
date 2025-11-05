#ifndef __DiscardedStatys__
#define __DiscardedStatys__

#include <QOBject>
#include "Interfacer/base/IDiscarded_obj.h"

class DiscardedStatys : public QObject, public IDiscarded_obj
{
    Q_OBJECT

    public:
    explicit DiscardedStatys(QObject *parent = nullptr);
    explicit DiscardedStatys(DiscardedStatys* obj);

    void discard() override;
    bool get_isDiscarded() override;

    private:
    bool isDiscarded;
};

#endif
