#ifndef SPRITE_H
#define SPRITE_H

#include<QObject>
#include<QGraphicsItem>
#include<QTimer>
#include<QPixmap>
#include<QPainter>

class cuerpo : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit cuerpo(QObject *parent=nullptr);

    QTimer * timer;
    QPixmap *pixmap;

    int filas, columnas;//float
    int ancho, alto;//float
    int posx=-130, posy=-7;
    int velocidad=10;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void up();
    void down();
    void left();
    void right();
    int getPosx() const;
    int getPosy() const;

signals:


public slots://la imagen se mueve
    void Actualizacion();//controla el movimiento

};

#endif // SPRITE_H
