#ifndef GAME
#define GAME

#include <QGraphicsView>
#include "myrect.h"
#include<QGraphicsScene>


class Game : public QGraphicsView {

public:
    Game(QWidget *parent=0);

    QGraphicsScene *scene;
    MyRect *player;

};



#endif // GAME

