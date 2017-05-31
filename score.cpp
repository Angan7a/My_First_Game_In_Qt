#include "score.h"
#include<QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    score = 0;

    setPlainText(QString("Score: )" + QString::number(score)));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));

}

void Score::increaseScore()
{
    score++;
}

int Score::getScore()
{
    return score;
}