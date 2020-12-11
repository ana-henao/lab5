#include "cuerpo.h"
#include<ctime>

cuerpo::cuerpo(QObject *parent) :QObject(parent)
{
    timer=new QTimer();

    filas=0;
    columnas=0;

    pixmap=new QPixmap(":/pictures/PACMAN.png");

    //dimensiones de la imagen
    ancho=50;
    alto=44;
    setPos(-130,-7);

    timer->start(100);//cada imagen cambia cada 300ms
    //cada x tiempo actuliza, conecta la señal del tiempo con la actualizacion
    connect(timer,&QTimer::timeout,this,&cuerpo::Actualizacion);
    this->t=clock();

}
void cuerpo::Actualizacion()
{
    columnas +=50;//tamaño de la imagen, cada 100 toma una imagen
    if (columnas>=200){
        columnas=0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);//actualiza imagen
    this->t1=clock();
}

QRectF cuerpo::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);//puntos iniciales y ancho y alto de cuadro
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}

int cuerpo::getPosx() const
{
    return posx;
}

int cuerpo::getPosy() const
{
    return posy;
}

double cuerpo::getTiempo()
{
    return (int(t1-t)/CLOCKS_PER_SEC);
}

void cuerpo::ResetTiempo()
{
    this->tiempo=0;


}

void cuerpo::up()
{
    posy-= 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::down()
{
    posy+= 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::left()
{
    posx-= 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::right()
{
    posx+= 1*velocidad;
    setPos(posx, posy);
}
