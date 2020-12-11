#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<QGraphicsScene>//escena
#include<QKeyEvent>//recibe teclas
#include<muro.h>
#include<QVector>
#include<QPainter>
#include<QRectF>
#include<QDesktopWidget>//pantalla adopta medidas del computador
#include<QDebug>
#include"cuerpo.h"
#include"moneda.h"
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void Muros();
    void Monedas();
    void Mundo1();
    void Mundo2();
    void Mundo3();
    int puntaje=0;
    int vidas=3;
    QTimer * timer;
    void actualizacion();
    int nivel=1;
    void IniciarMundo();
    void Reset();

    void keyPressEvent(QKeyEvent *evento);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    //void keyPressEvent(QKeyEvent *evento);
    QVector<muro*> muros={};

    cuerpo *personaje;

    float x,y,ancho,alto;//para darle el tamaño a la pantalla

    QVector<moneda*> monedas;
    QVector<moneda*> eliminarMonedas(QVector<moneda*> monedas ,int pos);



};
#endif // MAINWINDOW_H
