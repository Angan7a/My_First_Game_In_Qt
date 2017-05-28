#ifndef ENEMY
#define ENEMY


#include<QObject>
#include<QGraphicsRectItem>

class Enemy : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
};


#endif // ENEMY

