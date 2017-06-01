#ifndef GAME
#define GAME

#include <QGraphicsView>
#include "myrect.h"
#include<QGraphicsScene>
#include "score.h"
#include "lifes.h"

class Game : public QGraphicsView {

public:
    Game();

    QGraphicsScene *scene;
    MyRect *player;
    Score *score;
    Lifes *lifes;

};



#endif // GAME

