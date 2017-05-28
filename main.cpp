#include "mainwindow.h"
#include <QApplication>
#include<QGraphicsView>
#include<QGraphicsScene>
#include "myrect.h"
#include<QGraphicsEllipseItem>
#include<QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();


    MyRect * player = new MyRect();
    //QGraphicsEllipseItem * ellipse = new QGraphicsEllipseItem(10, 10, 20, 100);
    player->setRect(0, 0, 100, 50);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    //ellipse->setRotation(34);

    scene->addItem(player);
    //scene->addItem(ellipse);

    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    view->setSceneRect(0,0, 800, 600);


    player->setPos(view->width()/2 - player->rect().width()/2, view->height()-player->rect().height());

    QTimer * timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    return a.exec();
}
