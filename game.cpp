#include "game.h"
#include<QGraphicsView>


#include<QGraphicsEllipseItem>
#include<QTimer>



Game::Game()
{

    scene = new QGraphicsScene();


    player = new MyRect();
    player->setRect(0, 0, 100, 50);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    score = new Score();
    scene->addItem(score);

    lifes = new Lifes();
    scene->addItem(lifes);

    scene->addItem(player);


    //QGraphicsView * view = new QGraphicsView(scene);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //view->show();
    setFixedSize(800,600);
    setSceneRect(0,0, 800, 600);




    player->setPos(width()/2 - player->rect().width()/2, height()-player->rect().height());

    QTimer * timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    //show();
}
