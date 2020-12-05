#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"muro.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;
    QRect Desktop=QApplication::desktop()->screenGeometry();//se obtiene el rectangulo de la pantalla
    x=Desktop.x();
    y=Desktop.y();
    ancho=Desktop.width();
    alto=Desktop.height();
    scene=new QGraphicsScene(x,y,ancho,alto); //crea la escena
    personaje=new cuerpo();

    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);//define el tamaño de la escena

    scene->addItem(personaje);




    Muros();
    for (int i=0; i<this->muros.size(); i++) {

        scene->addItem(muros.at(i));
    }

    Monedas();
    for (int i=0; i<this->monedas.size(); i++) {

        scene->addItem(monedas.at(i));
    }
    ui->graphicsView->setScene(scene);//agrega la escena al graphics view

}


MainWindow::~MainWindow()
{
    delete ui;
}

QVector<moneda *> MainWindow::eliminarMonedas(QVector<moneda *> monedas, int pos)
{
    QVector<moneda*> aux;
    for (int i=0; i<monedas.size() ;i++ ) {
        if(i!=pos){
            aux.push_back(monedas.at(i));
        }
    }
    return aux;
}
//int w_, int h, int x, int y)
void MainWindow::Muros(){

//    muro *muro1=new muro(778,30,190,-440);//borde de abajo
//    this->muros.append(muro1);

//    muro *muro2=new muro(778,30,190,70);//borde de arriba
//    this->muros.append(muro2);

//    muro *muro3=new muro(30,480,189,40);//borde izquierda
//    this->muros.append(muro3);

//    muro *muro4=new muro(30,480,-558,40);//borde derecha
//    this->muros.append(muro4);

//    muro *muro5=new muro(30,90,-360,-30);
//    this->muros.append(muro5);

//    muro *muro6=new muro(200,30,90,-305);
//    this->muros.append(muro6);//listo

//    muro *muro7=new muro(80,160,90,-145);
//    this->muros.append(muro7);//listo

//    muro *muro8=new muro(100,30,-45,-208);//central
//    this->muros.append(muro8);

//    muro *muro9=new muro(160,30,-205,-208);
//    this->muros.append(muro9);//listo

//    muro *muro10=new muro(140,30,90,-25);
//    this->muros.append(muro10);

//    muro *muro11=new muro(70,30,-115,-25);
//    this->muros.append(muro11);//listo

//    muro *muro12=new muro(240,30,-250,-25);
//    this->muros.append(muro12);//listo

//    muro *muro13=new muro(65,130,-425,-130);
//    this->muros.append(muro13);

//    muro *muro14=new muro(310,30,159,-115);
//    this->muros.append(muro14);//listo

//    muro *muro15=new muro(80,30,-210,-115);
//    this->muros.append(muro15);//centro

//    muro *muro16=new muro(130,30,-360,-115);
//    this->muros.append(muro16);

//    muro *muro17=new muro(100,30,-45,-335);//central
//    this->muros.append(muro17);

//    muro *muro18=new muro(120,30,-370,-330);
//    this->muros.append(muro18);//listo

//    muro *muro19=new muro(30,110,-340,-330);
//    this->muros.append(muro19);

//    muro *muro20=new muro(30,110,-240,-330);
//    this->muros.append(muro20);



    //mundo2

//    muro *muro1=new muro(778,30,190,-440);//borde de abajo
//    this->muros.append(muro1);

//    muro *muro2=new muro(778,30,190,70);//borde de arriba
//    this->muros.append(muro2);

//    muro *muro3=new muro(30,480,189,40);//borde izquierda
//    this->muros.append(muro3);

//    muro *muro4=new muro(30,480,-558,40);//borde derecha
//    this->muros.append(muro4);

//    muro *muro5=new muro(200,30,100,-20);//primero horizontal
//    this->muros.append(muro5);

//    muro *muro6=new muro(30,212,-99,-18);
//    this->muros.append(muro6);//vertical

//    muro *muro7=new muro(200,30,159,-110);
//    this->muros.append(muro7);//listo

//    muro *muro8=new muro(350,30,99,-290);
//    this->muros.append(muro8);//horizontal largo

//    muro *muro9=new muro(60,270,-190,40);
//    this->muros.append(muro9);//vertical2

//    muro *muro10=new muro(190,90,-308,-20);
//    this->muros.append(muro10);//listo

//    muro *muro11=new muro(250,30,-308,-180);
//    this->muros.append(muro11);//listo

//    muro *muro12=new muro(30,170,-308,-210);
//    this->muros.append(muro12);//listo

//    muro *muro13=new muro(30,60,-128,-320);
//    this->muros.append(muro13);//listo

//    muro *muro14=new muro(100,30,-400,-350);
//    this->muros.append(muro14);//listo

//    muro *muro15=new muro(30,90,-220,-290);
//    this->muros.append(muro15);//listo

//    muro *muro16=new muro(200,30,100,-200);
//    this->muros.append(muro16);//listo

//    muro *muro17=new muro(165,10,100,-375);
//    this->muros.append(muro17);//delgado

//    muro *muro18=new muro(100,30,-400,-270);
//    this->muros.append(muro18);//listo

//    muro *muro19=new muro(30,60, -400,-210);
//    this->muros.append(muro19);

        //mundo3 falta

    muro *muro1=new muro(778,30,190,-440);//borde de abajo
    this->muros.append(muro1);

    muro *muro2=new muro(778,30,190,70);//borde de arriba
    this->muros.append(muro2);

    muro *muro3=new muro(30,480,189,40);//borde izquierda
    this->muros.append(muro3);

    muro *muro4=new muro(30,480,-558,40);//borde derecha
    this->muros.append(muro4);

    muro *muro5=new muro(10,140,90,40);
    this->muros.append(muro5);

    muro *muro6=new muro(100,30,90,-95);
    this->muros.append(muro6);

    muro *muro7=new muro(30,30,25,-10);
    this->muros.append(muro7);//cuadro superior izquierdo

    muro *muro8=new muro(10,100,-60,-100);
    this->muros.append(muro8);

    muro *muro9=new muro(30,30,-60,-10);
    this->muros.append(muro9);
}

void MainWindow::Monedas(){
    //mundo2
//    moneda *moneda1=new moneda(10,-80,-9);
//    this->monedas.append(moneda1);

//    moneda *moneda2=new moneda(10,-40,-9);
//    this->monedas.append(moneda2);

//    moneda *moneda3=new moneda(10,0,-9);
//    this->monedas.append(moneda3);

//    moneda *moneda4=new moneda(10,40,-9);
//    this->monedas.append(moneda4);

//    moneda *moneda5=new moneda(10,80,-9);
//    this->monedas.append(moneda5);

//    moneda *moneda6=new moneda(10,120,-9);
//    this->monedas.append(moneda6);

//    moneda *moneda7=new moneda(10,160,-9);
//    this->monedas.append(moneda7);

//    moneda *moneda8=new moneda(10,160,31);
//    this->monedas.append(moneda8);

//    moneda *moneda9=new moneda(10,160,71);
//    this->monedas.append(moneda9);

//    moneda *moneda10=new moneda(10,160,111);
//    this->monedas.append(moneda10);

//    moneda *moneda11=new moneda(10,160,151);
//    this->monedas.append(moneda11);

//    moneda *moneda12=new moneda(10,160,191);
//    this->monedas.append(moneda12);

//    moneda *moneda13=new moneda(10,160,229);
//    this->monedas.append(moneda13);

//    moneda *moneda14=new moneda(10,160,265);
//    this->monedas.append(moneda14);

//    moneda *moneda15=new moneda(10,-65,81);
//    this->monedas.append(moneda15);

//    moneda *moneda16=new moneda(10,-30,81);
//    this->monedas.append(moneda16);

//    moneda *moneda17=new moneda(10,5,81);
//    this->monedas.append(moneda17);

//    moneda *moneda18=new moneda(10,40,81);
//    this->monedas.append(moneda18);

//    moneda *moneda19=new moneda(10,75,81);
//    this->monedas.append(moneda19);

//    moneda *moneda20=new moneda(10,-100,81);
//    this->monedas.append(moneda20);

//    moneda *moneda21=new moneda(10,-135,81);
//    this->monedas.append(moneda21);

//    moneda *moneda22=new moneda(10,-135,41);
//    this->monedas.append(moneda22);

//    moneda *moneda23=new moneda(10,-65,81);
//    this->monedas.append(moneda23);

//    moneda *moneda24=new moneda(10,72,125);
//    this->monedas.append(moneda24);

//    moneda *moneda25=new moneda(10,72,165);
//    this->monedas.append(moneda25);

//    moneda *moneda26=new moneda(10,40,165);
//    this->monedas.append(moneda26);

//    moneda *moneda27=new moneda(10,5,165);
//    this->monedas.append(moneda27);

//    moneda *moneda28=new moneda(10,-30,165);
//    this->monedas.append(moneda28);

//    moneda *moneda29=new moneda(10,-65,165);
//    this->monedas.append(moneda29);

//    moneda *moneda30=new moneda(10,-100,165);
//    this->monedas.append(moneda30);

//    moneda *moneda31=new moneda(10,-133,165);
//    this->monedas.append(moneda31);

//    moneda *moneda32=new moneda(10,-133,196);
//    this->monedas.append(moneda32);

//    moneda *moneda33=new moneda(10,-133,235);
//    this->monedas.append(moneda33);

//    moneda *moneda34=new moneda(10,-133,266);
//    this->monedas.append(moneda34);

//    moneda *moneda35=new moneda(10,-100,266);
//    this->monedas.append(moneda35);

//    moneda *moneda36=new moneda(10,-65,266);
//    this->monedas.append(moneda36);

//    moneda *moneda37=new moneda(10,-29,266);
//    this->monedas.append(moneda37);

//    moneda *moneda38=new moneda(10,7,266);
//    this->monedas.append(moneda38);

//    moneda *moneda39=new moneda(10,47,266);
//    this->monedas.append(moneda39);

//    moneda *moneda40=new moneda(10,87,266);
//    this->monedas.append(moneda40);

//    moneda *moneda41=new moneda(10,125,266);
//    this->monedas.append(moneda41);

//    moneda *moneda42=new moneda(10,197,266);
//    this->monedas.append(moneda42);

//    moneda *moneda43=new moneda(10,237,266);
//    this->monedas.append(moneda43);

//    moneda *moneda44=new moneda(10,277,266);
//    this->monedas.append(moneda44);

//    moneda *moneda45=new moneda(10,277,306);
//    this->monedas.append(moneda45);

//    moneda *moneda46=new moneda(10,277,346);
//    this->monedas.append(moneda46);

//    moneda *moneda47=new moneda(10,277,386);
//    this->monedas.append(moneda47);

//    moneda *moneda48=new moneda(10,277,420);
//    this->monedas.append(moneda48);

//    moneda *moneda49=new moneda(10,230,420);
//    this->monedas.append(moneda49);

//    moneda *moneda50=new moneda(10,186,420);
//    this->monedas.append(moneda50);

//    moneda *moneda51=new moneda(10,186,386);
//    this->monedas.append(moneda51);

//    moneda *moneda52=new moneda(10,186,346);
//    this->monedas.append(moneda52);

//    moneda *moneda53=new moneda(10,140,420);
//    this->monedas.append(moneda53);

//    moneda *moneda54=new moneda(10,100,420);
//    this->monedas.append(moneda54);

//    moneda *moneda55=new moneda(10,100,380);
//    this->monedas.append(moneda55);

//    moneda *moneda56=new moneda(10,100,340);
//    this->monedas.append(moneda56);

//    moneda *moneda57=new moneda(10,60,420);
//    this->monedas.append(moneda57);

//    moneda *moneda58=new moneda(10,20,420);
//    this->monedas.append(moneda58);

//    moneda *moneda59=new moneda(10,-20,420);
//    this->monedas.append(moneda59);

//    moneda *moneda60=new moneda(10,-60,420);
//    this->monedas.append(moneda60);

//    moneda *moneda61=new moneda(10,-100,420);
//    this->monedas.append(moneda61);

//    moneda *moneda62=new moneda(10,-135,420);
//    this->monedas.append(moneda62);

//    moneda *moneda63=new moneda(10,-135,380);
//    this->monedas.append(moneda63);

//    moneda *moneda64=new moneda(10,-135,340);
//    this->monedas.append(moneda64);

//    moneda *moneda65=new moneda(10,-135,300);
//    this->monedas.append(moneda65);

//    moneda *moneda66=new moneda(10,-95,340);
//    this->monedas.append(moneda66);

//    moneda *moneda67=new moneda(10,-55,340);
//    this->monedas.append(moneda67);

//    moneda *moneda68=new moneda(10,-15,340);
//    this->monedas.append(moneda68);

//    moneda *moneda69=new moneda(10,25,340);
//    this->monedas.append(moneda69);

//    moneda *moneda70=new moneda(10,65,340);
//    this->monedas.append(moneda70);

//    moneda *moneda71=new moneda(10,320,420);
//    this->monedas.append(moneda71);

//    moneda *moneda72=new moneda(10,370,280);
//    this->monedas.append(moneda72);

//    moneda *moneda73=new moneda(10,370,315);
//    this->monedas.append(moneda73);

//    moneda *moneda74=new moneda(10,370,350);
//    this->monedas.append(moneda74);

//    moneda *moneda75=new moneda(10,370,385);
//    this->monedas.append(moneda75);

//    moneda *moneda76=new moneda(10,370,420);
//    this->monedas.append(moneda76);

//    moneda *moneda77=new moneda(10,370,245);
//    this->monedas.append(moneda77);

//    moneda *moneda78=new moneda(10,410,320);
//    this->monedas.append(moneda78);

//    moneda *moneda79=new moneda(10,450,320);
//    this->monedas.append(moneda79);

//    moneda *moneda80=new moneda(10,490,320);
//    this->monedas.append(moneda80);

//    moneda *moneda81=new moneda(10,530,320);
//    this->monedas.append(moneda81);

//    moneda *moneda82=new moneda(10,530,280);
//    this->monedas.append(moneda82);

//    moneda *moneda83=new moneda(10,530,240);
//    this->monedas.append(moneda83);

//    moneda *moneda84=new moneda(10,490,240);
//    this->monedas.append(moneda84);

//    moneda *moneda85=new moneda(10,450,240);
//    this->monedas.append(moneda85);

//    moneda *moneda86=new moneda(10,490,420);
//    this->monedas.append(moneda86);

//    moneda *moneda87=new moneda(10,450,420);
//    this->monedas.append(moneda87);

//    moneda *moneda88=new moneda(10,410,420);
//    this->monedas.append(moneda88);

//    moneda *moneda89=new moneda(10,530,425);
//    this->monedas.append(moneda89);

//    moneda *moneda90=new moneda(10,530,390);
//    this->monedas.append(moneda90);

//    moneda *moneda91=new moneda(10,530,350);
//    this->monedas.append(moneda91);

//    moneda *moneda92=new moneda(10,277,225);
//    this->monedas.append(moneda92);

//    moneda *moneda93=new moneda(10,277,185);
//    this->monedas.append(moneda93);

//    moneda *moneda94=new moneda(10,277,145);
//    this->monedas.append(moneda94);

//    moneda *moneda95=new moneda(10,277,105);
//    this->monedas.append(moneda95);

//    moneda *moneda96=new moneda(10,277,65);
//    this->monedas.append(moneda96);

//    moneda *moneda97=new moneda(10,277,25);
//    this->monedas.append(moneda97);

//    moneda *moneda98=new moneda(10,277,-15);
//    this->monedas.append(moneda98);

//    moneda *moneda99=new moneda(10,317,-15);
//    this->monedas.append(moneda99);

//    moneda *moneda100=new moneda(10,357,-15);
//    this->monedas.append(moneda100);

//    moneda *moneda101=new moneda(10,397,-15);
//    this->monedas.append(moneda101);

//    moneda *moneda102=new moneda(10,437,-15);
//    this->monedas.append(moneda102);

//    moneda *moneda103=new moneda(10,477,-15);
//    this->monedas.append(moneda103);

//    moneda *moneda104=new moneda(10,517,-15);
//    this->monedas.append(moneda104);

//    moneda *moneda105=new moneda(10,527,25);
//    this->monedas.append(moneda105);

//    moneda *moneda106=new moneda(10,527,65);
//    this->monedas.append(moneda106);

//    moneda *moneda107=new moneda(10,527,105);
//    this->monedas.append(moneda107);

//    moneda *moneda108=new moneda(10,527,145);
//    this->monedas.append(moneda108);

//    moneda *moneda109=new moneda(10,487,145);
//    this->monedas.append(moneda109);

//    moneda *moneda110=new moneda(10,447,145);
//    this->monedas.append(moneda110);

//    moneda *moneda111=new moneda(10,407,145);
//    this->monedas.append(moneda111);

//    moneda *moneda112=new moneda(10,367,145);
//    this->monedas.append(moneda112);

//    moneda *moneda113=new moneda(10,327,145);
//    this->monedas.append(moneda113);



}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_A){//mueve a la izquierda
        personaje->left();
    /**/for (int i=0; i<monedas.size();i++) {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas=eliminarMonedas(monedas,i);
            }
        }/**/
        for(int i=0; i<this->muros.size();i++){
            if(personaje->collidesWithItem(this->muros[i])){
                personaje->right();//se mueve al lado contrario
                break;
            }
        }
    }
    if(evento->key()==Qt::Key_D){//mueve a la derecha
        personaje->right();
    /**/for (int i=0; i<monedas.size();i++) {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas=eliminarMonedas(monedas,i);
            }
        }/**/
        for(int i=0; i<this->muros.size();i++){
            if(personaje->collidesWithItem(this->muros[i])){
                personaje->left();//se mueve al lado contrario
                break;
            }
        }
      }
    if(evento->key()==Qt::Key_W){//mueve arriba
        personaje->up();
    /**/for (int i=0; i<monedas.size();i++) {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas=eliminarMonedas(monedas,i);
            }
        }/**/
        for(int i=0; i<this->muros.size();i++){
            if(personaje->collidesWithItem(this->muros[i])){
                personaje->down();//se mueve al lado contrario
                break;
            }
        }
    }
    if(evento->key()==Qt::Key_S){//mueve abajo
        personaje->down();
    /**/for (int i=0; i<monedas.size();i++) {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas=eliminarMonedas(monedas,i);
            }
        }/**/
        for(int i=0; i<this->muros.size();i++){
            if(personaje->collidesWithItem(this->muros[i])){
                personaje->up();//se mueve al lado contrario
                break;
            }
        }
    }
}
