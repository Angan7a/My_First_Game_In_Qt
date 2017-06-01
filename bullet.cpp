#include "bullet.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include "enemy.h"
#include <typeinfo>
#include "game.h"

extern Game * game;


Bullet::Bullet()
{
    setRect(0, 0, 5, 50);

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Bullet::move()
{
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for (int i = 0; i < colliding_item.size(); ++i) {
        if (typeid(*(colliding_item[i])) == typeid(Enemy)) {
            scene()->removeItem(colliding_item[i]);
            scene()->removeItem(this);
            game->score->increaseScore();
            delete colliding_item[i];
            delete this;
            return;
        }
    }

    setPos(x(), y() - 10);
    if (pos().y() + rect().height() < 0) {
        scene()->removeItem(this);
        delete this;

    }

}

