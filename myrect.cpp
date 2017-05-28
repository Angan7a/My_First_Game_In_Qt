#include "myrect.h"
#include<QDebug>
#include <QKeyEvent>
#include "bullet.h"
#include<QGraphicsScene>
#include "enemy.h"
#include<QGraphicsRectItem>


void MyRect::keyPressEvent(QKeyEvent *even)
{
    if (even->key() == Qt::Key_Left) {
        if (pos().x() > 0)
        setPos(x()-10, y());
    }
    else if (even->key() == Qt::Key_Right) {
        if (pos().x() + 100 < 800 )
        setPos(x()+10, y());
    }
    else if (even->key() == Qt::Key_Space) {
        Bullet * bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }

}

void MyRect::spawn()
{
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
