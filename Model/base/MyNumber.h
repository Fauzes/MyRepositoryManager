#ifndef __MyNumber__
#define __MyNumber__

#include <QOBject>
#include "Interfacer/base/IMyNumber_obj.h"

#define LEN_SUB_PART                    3
#define START_TYPE_INDEX                5
#define START_CLASS_INDEX               (START_TYPE_INDEX + LEN_SUB_PART)
#define START_SIZE_INDEX                (START_CLASS_INDEX + LEN_SUB_PART)
#define START_SEQUENCE_NUMBER_INDEX     (START_SIZE_INDEX + LEN_SUB_PART)
#define START_COUNT_INDEX               (START_SEQUENCE_NUMBER_INDEX + LEN_SUB_PART)
#define START_MOD_INDEX                 (START_COUNT_INDEX + LEN_SUB_PART)


class MyNumber : public QObject, public IMyNumber_obj
{
    Q_OBJECT

    public:
    explicit MyNumber(QObject *parent = nullptr);
    explicit MyNumber(QString number, QObject *parent = nullptr);
    explicit MyNumber(MyNumber* obj);

    QString get_number() override;
    void set_number(QString number) override;
    uint get_type() override;
    uint get_class() override;
    uint get_size() override;
    uint get_sequence_number() override;
    uint get_count() override;
    QString get_mod() override;

    private:
    QString number;


};

#endif
