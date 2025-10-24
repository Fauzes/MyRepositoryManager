#ifndef STOEGEOBJECT_H
#define STOEGEOBJECT_H

#include <QObject>

class StoegeObject : public QObject
{
    Q_OBJECT
public:
    explicit StoegeObject(QObject *parent = nullptr);

signals:

};

#endif // STOEGEOBJECT_H
