#ifndef LIFES_H
#define LIFES_H

#include<QGraphicsTextItem>

class Lifes : public QGraphicsTextItem{
public:
    Lifes();
    void decrase();
private:
    int lifes;
};

#endif // LIFES_H
