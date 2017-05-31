#ifndef SCORE
#define SCORE

#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem {
private:
    int score;
public:
    Score(QGraphicsItem *parent);
    void increaseScore();
    int getScore();

};


#endif // SCORE

