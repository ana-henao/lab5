#ifndef MONEDA_H
#define MONEDA_H
#include<QGraphicsItem>
#include<QPainter>

class moneda: public QGraphicsItem
{
    int r; //radio del circulo
    int posx, posy;

public:

    moneda(int r, int x, int y);
    int getR() const;
    void setR(int radio);
    int getPosx() const;
    void setPosx(int px);
    int getPosy() const;
    void setPosy(int py);
    QRectF boundingRect() const; //dibuja el area en la que esta el cuerpo
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option , QWidget *witget = nullptr);


};

#endif // MONEDA_H
