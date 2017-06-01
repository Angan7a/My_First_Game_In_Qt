#include "lifes.h"
#include<QFont>


Lifes::Lifes() : QGraphicsTextItem() {

    lifes = 3;

    setPlainText(QString("Lifes: " + QString::number(lifes)));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
    setPos(0,30);
}

void Lifes::decrase()
{
    lifes--;
    setPlainText(QString("Lifes: " + QString::number(lifes)));
}
