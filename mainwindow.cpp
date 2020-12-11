#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"muro.h"
#include<iostream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;
    QRect Desktop=QApplication::desktop()->screenGeometry();//se obtiene el rectangulo de la pantalla

    this->Reset();

    timer=new QTimer();
    timer->start(100);//cada imagen cambia cada 300ms
    //cada x tiempo actuliza, conecta la señal del tiempo con la actualizacion
    connect(timer,&QTimer::timeout,this,&MainWindow::actualizacion);

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

void MainWindow::Mundo1()
{

        muro *muro1=new muro(778,30,190,-440);//borde de abajo
        this->muros.append(muro1);

        muro *muro2=new muro(778,30,190,70);//borde de arriba
        this->muros.append(muro2);

        muro *muro3=new muro(30,480,189,40);//borde izquierda
        this->muros.append(muro3);

        muro *muro4=new muro(30,480,-558,40);//borde derecha
        this->muros.append(muro4);

        muro *muro5=new muro(30,90,-360,-30);
        this->muros.append(muro5);

        muro *muro6=new muro(250,70,90,-305);
        this->muros.append(muro6);//listo

        muro *muro7=new muro(80,160,90,-145);
        this->muros.append(muro7);//listo

        muro *muro8=new muro(115,50,-45,-208);//central
        this->muros.append(muro8);

        muro *muro9=new muro(150,50,-220,-208);
        this->muros.append(muro9);//listo

        muro *muro10=new muro(140,30,90,-25);
        this->muros.append(muro10);

        muro *muro11=new muro(70,30,-115,-25);
        this->muros.append(muro11);//listo

        muro *muro12=new muro(240,30,-250,-25);
        this->muros.append(muro12);//listo

        muro *muro13=new muro(65,130,-425,-130);
        this->muros.append(muro13);

        muro *muro14=new muro(310,30,159,-115);
        this->muros.append(muro14);//listo

        muro *muro15=new muro(80,30,-220,-115);
        this->muros.append(muro15);//centro

        muro *muro16=new muro(130,30,-360,-115);
        this->muros.append(muro16);

//        muro *muro17=new muro(100,30,-45,-335);//central
//        this->muros.append(muro17);

        muro *muro18=new muro(120,60,-370,-311);
        this->muros.append(muro18);//listo

        muro *muro19=new muro(30,130,-340,-311);
        this->muros.append(muro19);

        muro *muro20=new muro(40,130,-240,-311);
        this->muros.append(muro20);




        moneda *moneda1=new moneda(10,-130,40);
        this->monedas.append(moneda1);

        moneda *moneda2=new moneda(10,-130,85);
        this->monedas.append(moneda2);

        moneda *moneda3=new moneda(10,-90,85);
        this->monedas.append(moneda3);

        moneda *moneda4=new moneda(10,-50,85);
        this->monedas.append(moneda4);

        moneda *moneda5=new moneda(10,-10,85);
        this->monedas.append(moneda5);

        moneda *moneda6=new moneda(10,30,85);
        this->monedas.append(moneda6);

        moneda *moneda7=new moneda(10,70,85);
        this->monedas.append(moneda7);//*

        moneda *moneda8=new moneda(10,110,85);
        this->monedas.append(moneda8);

        moneda *moneda9=new moneda(10,150,85);
        this->monedas.append(moneda9);

        moneda *moneda10=new moneda(10,190,85);
        this->monedas.append(moneda10);

        moneda *moneda11=new moneda(10,230,85);
        this->monedas.append(moneda11);

        moneda *moneda12=new moneda(10,270,85);
        this->monedas.append(moneda12);

        moneda *moneda13=new moneda(10,325,85);
        this->monedas.append(moneda13);//*

        moneda *moneda14=new moneda(10,325,125);
        this->monedas.append(moneda14);

        moneda *moneda15=new moneda(10,325,165);
        this->monedas.append(moneda15);

        moneda *moneda16=new moneda(10,70,40);
        this->monedas.append(moneda16);

        moneda *moneda17=new moneda(10,230,40);
        this->monedas.append(moneda17);

        moneda *moneda18=new moneda(10,-90,0);
        this->monedas.append(moneda18);

        moneda *moneda19=new moneda(10,-50,0);
        this->monedas.append(moneda19);

        moneda *moneda20=new moneda(10,-10,0);
        this->monedas.append(moneda20);

        moneda *moneda21=new moneda(10,30,0);
        this->monedas.append(moneda21);

        moneda *moneda22=new moneda(10,70,0);
        this->monedas.append(moneda22);

        moneda *moneda23=new moneda(10,110,0);
        this->monedas.append(moneda23);

        moneda *moneda24=new moneda(10,150,0);
        this->monedas.append(moneda24);

        moneda *moneda25=new moneda(10,190,0);
        this->monedas.append(moneda25);

        moneda *moneda26=new moneda(10,230,0);
        this->monedas.append(moneda26);

        moneda *moneda27=new moneda(10,270,0);
        this->monedas.append(moneda27);

        moneda *moneda28=new moneda(10,310,0);
        this->monedas.append(moneda28);

        moneda *moneda29=new moneda(10,350,0);
        this->monedas.append(moneda29);

        moneda *moneda30=new moneda(10,390,0);
        this->monedas.append(moneda30);

        moneda *moneda31=new moneda(10,430,0);
        this->monedas.append(moneda31);

        moneda *moneda32=new moneda(10,470,0);
        this->monedas.append(moneda32);

        moneda *moneda33=new moneda(10,510,0);
        this->monedas.append(moneda33);

        moneda *moneda34=new moneda(10,510,40);
        this->monedas.append(moneda34);

        moneda *moneda35=new moneda(10,510,80);
        this->monedas.append(moneda35);//**

        moneda *moneda36=new moneda(10,470,80);
        this->monedas.append(moneda36);

        moneda *moneda37=new moneda(10,430,80);
        this->monedas.append(moneda37);

        moneda *moneda38=new moneda(10,510,120);
        this->monedas.append(moneda38);

        moneda *moneda39=new moneda(10,510,160);
        this->monedas.append(moneda39);

        moneda *moneda40=new moneda(10,510,200);
        this->monedas.append(moneda40);

        moneda *moneda41=new moneda(10,510,240);
        this->monedas.append(moneda41);

        moneda *moneda42=new moneda(10,510,280);
        this->monedas.append(moneda42);

        moneda *moneda43=new moneda(10,510,320);
        this->monedas.append(moneda43);

        moneda *moneda44=new moneda(10,510,360);
        this->monedas.append(moneda44);

        moneda *moneda45=new moneda(10,510,400);
        this->monedas.append(moneda45);

        moneda *moneda46=new moneda(10,470,400);
        this->monedas.append(moneda46);

        moneda *moneda47=new moneda(10,430,400);
        this->monedas.append(moneda47);

        moneda *moneda48=new moneda(10,390,400);
        this->monedas.append(moneda48);

        moneda *moneda49=new moneda(10,310,400);
        this->monedas.append(moneda49);

        moneda *moneda50=new moneda(10,310,360);
        this->monedas.append(moneda50);

        moneda *moneda51=new moneda(10,310,320);
        this->monedas.append(moneda51);//**

        moneda *moneda52=new moneda(10,310,280);
        this->monedas.append(moneda52);

        moneda *moneda53=new moneda(10,350,280);
        this->monedas.append(moneda53);

        moneda *moneda54=new moneda(10,390,280);
        this->monedas.append(moneda54);

        moneda *moneda55=new moneda(10,430,280);
        this->monedas.append(moneda55);

        moneda *moneda56=new moneda(10,470,280);
        this->monedas.append(moneda56);

        moneda *moneda57=new moneda(10,390,240);
        this->monedas.append(moneda57);

        moneda *moneda58=new moneda(10,390,190);
        this->monedas.append(moneda58);

        moneda *moneda59=new moneda(10,310,190);
        this->monedas.append(moneda59);

        moneda *moneda60=new moneda(10,350,190);
        this->monedas.append(moneda60);

        moneda *moneda61=new moneda(10,270,190);
        this->monedas.append(moneda61);

        moneda *moneda62=new moneda(10,230,190);
        this->monedas.append(moneda62);

        moneda *moneda63=new moneda(10,190,190);
        this->monedas.append(moneda63);

        moneda *moneda64=new moneda(10,190,160);
        this->monedas.append(moneda64);

        moneda *moneda65=new moneda(10,190,120);
        this->monedas.append(moneda65);

        moneda *moneda66=new moneda(10,150,190);
        this->monedas.append(moneda66);

        moneda *moneda67=new moneda(10,110,190);
        this->monedas.append(moneda67);

        moneda *moneda68=new moneda(10,70,190);
        this->monedas.append(moneda68);

        moneda *moneda69=new moneda(10,30,190);
        this->monedas.append(moneda69);

        moneda *moneda70=new moneda(10,30,230);
        this->monedas.append(moneda70);

        moneda *moneda71=new moneda(10,30,280);
        this->monedas.append(moneda71);

        moneda *moneda72=new moneda(10,70,280);
        this->monedas.append(moneda72);

        moneda *moneda73=new moneda(10,110,280);
        this->monedas.append(moneda73);//*

        moneda *moneda74=new moneda(10,150,280);
        this->monedas.append(moneda74);

        moneda *moneda75=new moneda(10,190,280);
        this->monedas.append(moneda75);

        moneda *moneda76=new moneda(10,230,280);
        this->monedas.append(moneda76);

        moneda *moneda77=new moneda(10,270,280);
        this->monedas.append(moneda77);

        moneda *moneda78=new moneda(10,190,240);
        this->monedas.append(moneda78);

        moneda *moneda79=new moneda(10,190,320);
        this->monedas.append(moneda79);

//        moneda *moneda80=new moneda(10,150,320);
//        this->monedas.append(moneda80);

//        moneda *moneda81=new moneda(10,230,320);
//        this->monedas.append(moneda81);

//        moneda *moneda82=new moneda(10,270,320);
//        this->monedas.append(moneda82);

        moneda *moneda83=new moneda(10,190,360);
        this->monedas.append(moneda83);

        moneda *moneda84=new moneda(10,190,400);
        this->monedas.append(moneda84);

        moneda *moneda85=new moneda(10,150,400);
        this->monedas.append(moneda85);//

        moneda *moneda86=new moneda(10,110,400);
        this->monedas.append(moneda86);//

        moneda *moneda87=new moneda(10,70,400);
        this->monedas.append(moneda87);

        moneda *moneda88=new moneda(10,30,400);
        this->monedas.append(moneda88);

        moneda *moneda89=new moneda(10,-10,400);
        this->monedas.append(moneda89);

        moneda *moneda90=new moneda(10,-50,400);
        this->monedas.append(moneda90);

        moneda *moneda91=new moneda(10,-90,400);
        this->monedas.append(moneda91);

        moneda *moneda92=new moneda(10,-130,400);
        this->monedas.append(moneda92);

        moneda *moneda93=new moneda(10,-130,350);
        this->monedas.append(moneda93);

        moneda *moneda94=new moneda(10,-130,310);
        this->monedas.append(moneda94);

        moneda *moneda95=new moneda(10,-130,270);
        this->monedas.append(moneda95);

        moneda *moneda96=new moneda(10,-130,230);
        this->monedas.append(moneda96);

        moneda *moneda97=new moneda(10,-130,190);
        this->monedas.append(moneda97);


}

void MainWindow::Mundo2()
{
        muro *muro1=new muro(778,30,190,-440);//borde de abajo
        this->muros.append(muro1);

        muro *muro2=new muro(778,30,190,70);//borde de arriba
        this->muros.append(muro2);

        muro *muro3=new muro(30,480,189,40);//borde izquierda
        this->muros.append(muro3);

        muro *muro4=new muro(30,480,-558,40);//borde derecha
        this->muros.append(muro4);

        muro *muro5=new muro(200,30,100,-20);//primero horizontal
        this->muros.append(muro5);

        muro *muro6=new muro(30,212,-99,-18);
        this->muros.append(muro6);//vertical

        muro *muro7=new muro(200,30,159,-110);
        this->muros.append(muro7);//listo

        muro *muro8=new muro(350,30,99,-290);
        this->muros.append(muro8);//horizontal largo

        muro *muro9=new muro(60,270,-190,40);
        this->muros.append(muro9);//vertical2

        muro *muro10=new muro(190,90,-308,-20);
        this->muros.append(muro10);//listo

        muro *muro11=new muro(250,30,-308,-180);
        this->muros.append(muro11);//listo

        muro *muro12=new muro(30,170,-308,-210);
        this->muros.append(muro12);//listo

        muro *muro13=new muro(30,60,-128,-320);
        this->muros.append(muro13);//listo

        muro *muro14=new muro(100,30,-400,-350);
        this->muros.append(muro14);//listo

        muro *muro15=new muro(30,90,-220,-290);
        this->muros.append(muro15);//listo

        muro *muro16=new muro(200,30,100,-200);
        this->muros.append(muro16);//listo

        muro *muro17=new muro(165,10,100,-375);
        this->muros.append(muro17);//delgado

        muro *muro18=new muro(100,30,-400,-270);
        this->muros.append(muro18);//listo

        muro *muro19=new muro(30,60, -400,-210);
        this->muros.append(muro19);




        moneda *moneda1=new moneda(10,-80,-9);
        this->monedas.append(moneda1);

        moneda *moneda2=new moneda(10,-40,-9);
        this->monedas.append(moneda2);

        moneda *moneda3=new moneda(10,0,-9);
        this->monedas.append(moneda3);

        moneda *moneda4=new moneda(10,40,-9);
        this->monedas.append(moneda4);

        moneda *moneda5=new moneda(10,80,-9);
        this->monedas.append(moneda5);

        moneda *moneda6=new moneda(10,120,-9);
        this->monedas.append(moneda6);

        moneda *moneda7=new moneda(10,160,-9);
        this->monedas.append(moneda7);

        moneda *moneda8=new moneda(10,160,31);
        this->monedas.append(moneda8);

        moneda *moneda9=new moneda(10,160,71);
        this->monedas.append(moneda9);

        moneda *moneda10=new moneda(10,160,111);
        this->monedas.append(moneda10);

        moneda *moneda11=new moneda(10,160,151);
        this->monedas.append(moneda11);

        moneda *moneda12=new moneda(10,160,191);
        this->monedas.append(moneda12);

        moneda *moneda13=new moneda(10,160,229);
        this->monedas.append(moneda13);

        moneda *moneda14=new moneda(10,160,265);
        this->monedas.append(moneda14);

        moneda *moneda15=new moneda(10,-65,81);
        this->monedas.append(moneda15);

        moneda *moneda16=new moneda(10,-30,81);
        this->monedas.append(moneda16);

        moneda *moneda17=new moneda(10,5,81);
        this->monedas.append(moneda17);

        moneda *moneda18=new moneda(10,40,81);
        this->monedas.append(moneda18);

        moneda *moneda19=new moneda(10,75,81);
        this->monedas.append(moneda19);

        moneda *moneda20=new moneda(10,-100,81);
        this->monedas.append(moneda20);

        moneda *moneda21=new moneda(10,-135,81);
        this->monedas.append(moneda21);

        moneda *moneda22=new moneda(10,-135,41);
        this->monedas.append(moneda22);

        moneda *moneda23=new moneda(10,-65,81);
        this->monedas.append(moneda23);

        moneda *moneda24=new moneda(10,72,125);
        this->monedas.append(moneda24);

        moneda *moneda25=new moneda(10,72,165);
        this->monedas.append(moneda25);

        moneda *moneda26=new moneda(10,40,165);
        this->monedas.append(moneda26);

        moneda *moneda27=new moneda(10,5,165);
        this->monedas.append(moneda27);

        moneda *moneda28=new moneda(10,-30,165);
        this->monedas.append(moneda28);

        moneda *moneda29=new moneda(10,-65,165);
        this->monedas.append(moneda29);

        moneda *moneda30=new moneda(10,-100,165);
        this->monedas.append(moneda30);

        moneda *moneda31=new moneda(10,-133,165);
        this->monedas.append(moneda31);

        moneda *moneda32=new moneda(10,-133,196);
        this->monedas.append(moneda32);

        moneda *moneda33=new moneda(10,-133,235);
        this->monedas.append(moneda33);

        moneda *moneda34=new moneda(10,-133,266);
        this->monedas.append(moneda34);

        moneda *moneda35=new moneda(10,-100,266);
        this->monedas.append(moneda35);

        moneda *moneda36=new moneda(10,-65,266);
        this->monedas.append(moneda36);

        moneda *moneda37=new moneda(10,-29,266);
        this->monedas.append(moneda37);

        moneda *moneda38=new moneda(10,7,266);
        this->monedas.append(moneda38);

        moneda *moneda39=new moneda(10,47,266);
        this->monedas.append(moneda39);

        moneda *moneda40=new moneda(10,87,266);
        this->monedas.append(moneda40);

        moneda *moneda41=new moneda(10,125,266);
        this->monedas.append(moneda41);

        moneda *moneda42=new moneda(10,197,266);
        this->monedas.append(moneda42);

        moneda *moneda43=new moneda(10,237,266);
        this->monedas.append(moneda43);

        moneda *moneda44=new moneda(10,277,266);
        this->monedas.append(moneda44);

        moneda *moneda45=new moneda(10,277,306);
        this->monedas.append(moneda45);

        moneda *moneda46=new moneda(10,277,346);
        this->monedas.append(moneda46);

        moneda *moneda47=new moneda(10,277,386);
        this->monedas.append(moneda47);

        moneda *moneda48=new moneda(10,277,420);
        this->monedas.append(moneda48);

        moneda *moneda49=new moneda(10,230,420);
        this->monedas.append(moneda49);

        moneda *moneda50=new moneda(10,186,420);
        this->monedas.append(moneda50);

        moneda *moneda51=new moneda(10,186,386);
        this->monedas.append(moneda51);

        moneda *moneda52=new moneda(10,186,346);
        this->monedas.append(moneda52);

        moneda *moneda53=new moneda(10,140,420);
        this->monedas.append(moneda53);

        moneda *moneda54=new moneda(10,100,420);
        this->monedas.append(moneda54);

        moneda *moneda55=new moneda(10,100,380);
        this->monedas.append(moneda55);

        moneda *moneda56=new moneda(10,100,340);
        this->monedas.append(moneda56);

        moneda *moneda57=new moneda(10,60,420);
        this->monedas.append(moneda57);

        moneda *moneda58=new moneda(10,20,420);
        this->monedas.append(moneda58);

        moneda *moneda59=new moneda(10,-20,420);
        this->monedas.append(moneda59);

        moneda *moneda60=new moneda(10,-60,420);
        this->monedas.append(moneda60);

        moneda *moneda61=new moneda(10,-100,420);
        this->monedas.append(moneda61);

        moneda *moneda62=new moneda(10,-135,420);
        this->monedas.append(moneda62);

        moneda *moneda63=new moneda(10,-135,380);
        this->monedas.append(moneda63);

        moneda *moneda64=new moneda(10,-135,340);
        this->monedas.append(moneda64);

        moneda *moneda65=new moneda(10,-135,300);
        this->monedas.append(moneda65);

        moneda *moneda66=new moneda(10,-95,340);
        this->monedas.append(moneda66);

        moneda *moneda67=new moneda(10,-55,340);
        this->monedas.append(moneda67);

        moneda *moneda68=new moneda(10,-15,340);
        this->monedas.append(moneda68);

        moneda *moneda69=new moneda(10,25,340);
        this->monedas.append(moneda69);

        moneda *moneda70=new moneda(10,65,340);
        this->monedas.append(moneda70);

        moneda *moneda71=new moneda(10,320,420);
        this->monedas.append(moneda71);

        moneda *moneda72=new moneda(10,370,280);
        this->monedas.append(moneda72);

        moneda *moneda73=new moneda(10,370,315);
        this->monedas.append(moneda73);

        moneda *moneda74=new moneda(10,370,350);
        this->monedas.append(moneda74);

        moneda *moneda75=new moneda(10,370,385);
        this->monedas.append(moneda75);

        moneda *moneda76=new moneda(10,370,420);
        this->monedas.append(moneda76);

        moneda *moneda77=new moneda(10,370,245);
        this->monedas.append(moneda77);

        moneda *moneda78=new moneda(10,410,320);
        this->monedas.append(moneda78);

        moneda *moneda79=new moneda(10,450,320);
        this->monedas.append(moneda79);

        moneda *moneda80=new moneda(10,490,320);
        this->monedas.append(moneda80);

        moneda *moneda81=new moneda(10,530,320);
        this->monedas.append(moneda81);

        moneda *moneda82=new moneda(10,530,280);
        this->monedas.append(moneda82);

        moneda *moneda83=new moneda(10,530,240);
        this->monedas.append(moneda83);

        moneda *moneda84=new moneda(10,490,240);
        this->monedas.append(moneda84);

        moneda *moneda85=new moneda(10,450,240);
        this->monedas.append(moneda85);

        moneda *moneda86=new moneda(10,490,420);
        this->monedas.append(moneda86);

        moneda *moneda87=new moneda(10,450,420);
        this->monedas.append(moneda87);

        moneda *moneda88=new moneda(10,410,420);
        this->monedas.append(moneda88);

        moneda *moneda89=new moneda(10,530,425);
        this->monedas.append(moneda89);

        moneda *moneda90=new moneda(10,530,390);
        this->monedas.append(moneda90);

        moneda *moneda91=new moneda(10,530,350);
        this->monedas.append(moneda91);

        moneda *moneda92=new moneda(10,277,225);
        this->monedas.append(moneda92);

        moneda *moneda93=new moneda(10,277,185);
        this->monedas.append(moneda93);

        moneda *moneda94=new moneda(10,277,145);
        this->monedas.append(moneda94);

        moneda *moneda95=new moneda(10,277,105);
        this->monedas.append(moneda95);

        moneda *moneda96=new moneda(10,277,65);
        this->monedas.append(moneda96);

        moneda *moneda97=new moneda(10,277,25);
        this->monedas.append(moneda97);

        moneda *moneda98=new moneda(10,277,-15);
        this->monedas.append(moneda98);

        moneda *moneda99=new moneda(10,317,-15);
        this->monedas.append(moneda99);

        moneda *moneda100=new moneda(10,357,-15);
        this->monedas.append(moneda100);

        moneda *moneda101=new moneda(10,397,-15);
        this->monedas.append(moneda101);

        moneda *moneda102=new moneda(10,437,-15);
        this->monedas.append(moneda102);

        moneda *moneda103=new moneda(10,477,-15);
        this->monedas.append(moneda103);

        moneda *moneda104=new moneda(10,517,-15);
        this->monedas.append(moneda104);

        moneda *moneda105=new moneda(10,527,25);
        this->monedas.append(moneda105);

        moneda *moneda106=new moneda(10,527,65);
        this->monedas.append(moneda106);

        moneda *moneda107=new moneda(10,527,105);
        this->monedas.append(moneda107);

        moneda *moneda108=new moneda(10,527,145);
        this->monedas.append(moneda108);

        moneda *moneda109=new moneda(10,487,145);
        this->monedas.append(moneda109);

        moneda *moneda110=new moneda(10,447,145);
        this->monedas.append(moneda110);

        moneda *moneda111=new moneda(10,407,145);
        this->monedas.append(moneda111);

        moneda *moneda112=new moneda(10,367,145);
        this->monedas.append(moneda112);

        moneda *moneda113=new moneda(10,327,145);
        this->monedas.append(moneda113);


}

void MainWindow::Mundo3()
{

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

        muro *muro6=new muro(150,30,90,-95);
        this->muros.append(muro6);

        muro *muro7=new muro(30,30,25,-10);
        this->muros.append(muro7);//cuadro superior izquierdo

//        muro *muro8=new muro(10,100,-60,-100);
//        this->muros.append(muro8);

//        muro *muro9=new muro(30,30,-60,-10);
//        this->muros.append(muro9);

        muro *muro10=new muro(15,15,-120,-185);
        this->muros.append(muro10);

        muro *muro11=new muro(150,30,-120,-100);
        this->muros.append(muro11);

        muro *muro12=new muro(10,70,-190,-130);
        this->muros.append(muro12);

        muro *muro13=new muro(15,70,-255,-130);
        this->muros.append(muro13);

        muro *muro14=new muro(200,30,-65,-10);
        this->muros.append(muro14);

        muro *muro15=new muro(150,60,-120,-250);
        this->muros.append(muro15);

        muro *muro16=new muro(20,300,-325,-10);
        this->muros.append(muro16);

        muro *muro17=new muro(213,20,-345,-50);
        this->muros.append(muro17);

//        muro *muro18=new muro(40,20,-345,-250);
//        this->muros.append(muro18);

        muro *muro19=new muro(100,70,-400,-125);
        this->muros.append(muro19);

        muro *muro20=new muro(100,40,-400,40);
        this->muros.append(muro20);

        muro *muro21=new muro(150,60,90,-250);
        this->muros.append(muro21);

        muro *muro22=new muro(150,20,90,-177);
        this->muros.append(muro22);

        muro *muro23=new muro(75,20,90,-365);
        this->muros.append(muro23);

        muro *muro24=new muro(75,20,-50,-365);
        this->muros.append(muro24);

        muro *muro25=new muro(75,20,-190,-365);
        this->muros.append(muro25);

        muro *muro26=new muro(75,20,-330,-365);
        this->muros.append(muro26);

        muro *muro27=new muro(20,75,-330,-365);
        this->muros.append(muro27);

        muro *muro28=new muro(20,190,-465,-195);
        this->muros.append(muro28);




        moneda *moneda1=new moneda(10,-125,40);
        this->monedas.append(moneda1);

        moneda *moneda2=new moneda(10,-125,90);
        this->monedas.append(moneda2);

        moneda *moneda3=new moneda(10,-125,130);
        this->monedas.append(moneda3);

        moneda *moneda4=new moneda(10,-125,170);
        this->monedas.append(moneda4);

        moneda *moneda5=new moneda(10,-125,210);
        this->monedas.append(moneda5);

        moneda *moneda6=new moneda(10,-125,250);
        this->monedas.append(moneda6);

        moneda *moneda7=new moneda(10,-125,290);
        this->monedas.append(moneda7);

        moneda *moneda8=new moneda(10,-125,330);
        this->monedas.append(moneda8);

        moneda *moneda9=new moneda(10,-125,370);
        this->monedas.append(moneda9);

        moneda *moneda10=new moneda(10,-125,415);
        this->monedas.append(moneda10);

        moneda *moneda11=new moneda(10,-80,415);
        this->monedas.append(moneda11);//horizontales inferiores

        moneda *moneda12=new moneda(10,-35,415);
        this->monedas.append(moneda12);

        moneda *moneda13=new moneda(10,10,415);
        this->monedas.append(moneda13);

        moneda *moneda14=new moneda(10,50,415);
        this->monedas.append(moneda14);

        moneda *moneda15=new moneda(10,90,415);
        this->monedas.append(moneda15);

        moneda *moneda16=new moneda(10,130,415);
        this->monedas.append(moneda16);

        moneda *moneda17=new moneda(10,170,415);
        this->monedas.append(moneda17);

        moneda *moneda18=new moneda(10,210,415);
        this->monedas.append(moneda18);

        moneda *moneda19=new moneda(10,250,415);
        this->monedas.append(moneda19);

        moneda *moneda20=new moneda(10,290,415);
        this->monedas.append(moneda20);

        moneda *moneda21=new moneda(10,-80,330);
        this->monedas.append(moneda21);

        moneda *moneda22=new moneda(10,-35,330);
        this->monedas.append(moneda22);

        moneda *moneda23=new moneda(10,10,330);
        this->monedas.append(moneda23);

        moneda *moneda24=new moneda(10,47,330);
        this->monedas.append(moneda24);

        moneda *moneda25=new moneda(10,90,330);
        this->monedas.append(moneda25);

        moneda *moneda26=new moneda(10,130,330);
        this->monedas.append(moneda26);

        moneda *moneda27=new moneda(10,170,330);
        this->monedas.append(moneda27);

        moneda *moneda28=new moneda(10,210,330);
        this->monedas.append(moneda28);

        moneda *moneda29=new moneda(10,250,330);
        this->monedas.append(moneda29);

        moneda *moneda30=new moneda(10,290,330);
        this->monedas.append(moneda30);

        moneda *moneda31=new moneda(10,330,330);
        this->monedas.append(moneda31);

        moneda *moneda32=new moneda(10,370,330);
        this->monedas.append(moneda32);

        moneda *moneda33=new moneda(10,410,330);
        this->monedas.append(moneda33);

        moneda *moneda34=new moneda(10,170,370);
        this->monedas.append(moneda34);

        moneda *moneda35=new moneda(10,170,370);
        this->monedas.append(moneda35);

        moneda *moneda36=new moneda(10,10,370);
        this->monedas.append(moneda36);

        moneda *moneda37=new moneda(10,290,370);
        this->monedas.append(moneda37);

        moneda *moneda38=new moneda(10,445,330);
        this->monedas.append(moneda38);

        moneda *moneda39=new moneda(10,445,370);
        this->monedas.append(moneda39);

        moneda *moneda40=new moneda(10,445,410);
        this->monedas.append(moneda40);

        moneda *moneda41=new moneda(10,485,410);
        this->monedas.append(moneda41);

        moneda *moneda42=new moneda(10,525,410);
        this->monedas.append(moneda42);

        moneda *moneda43=new moneda(10,405,410);
        this->monedas.append(moneda43);

        moneda *moneda44=new moneda(10,365,410);
        this->monedas.append(moneda44);

        moneda *moneda45=new moneda(10,525,370);
        this->monedas.append(moneda45);

        moneda *moneda46=new moneda(10,525,330);
        this->monedas.append(moneda46);

        moneda *moneda47=new moneda(10,525,290);
        this->monedas.append(moneda47);

        moneda *moneda48=new moneda(10,525,250);
        this->monedas.append(moneda48);

        moneda *moneda49=new moneda(10,525,210);
        this->monedas.append(moneda49);

        moneda *moneda50=new moneda(10,525,170);
        this->monedas.append(moneda50);

        moneda *moneda51=new moneda(10,525,130);
        this->monedas.append(moneda51);

        moneda *moneda52=new moneda(10,525,90);
        this->monedas.append(moneda52);

        moneda *moneda53=new moneda(10,485,90);
        this->monedas.append(moneda53);

        moneda *moneda54=new moneda(10,445,90);
        this->monedas.append(moneda54);

        moneda *moneda55=new moneda(10,405,90);
        this->monedas.append(moneda55);

        moneda *moneda56=new moneda(10,365,90);
        this->monedas.append(moneda56);

        moneda *moneda57=new moneda(10,365,130);
        this->monedas.append(moneda57);

        moneda *moneda58=new moneda(10,365,170);
        this->monedas.append(moneda58);

        moneda *moneda59=new moneda(10,365,210);
        this->monedas.append(moneda59);

        moneda *moneda60=new moneda(10,405,210);
        this->monedas.append(moneda60);

        moneda *moneda61=new moneda(10,445,210);
        this->monedas.append(moneda61);

        moneda *moneda62=new moneda(10,445,250);
        this->monedas.append(moneda62);

        moneda *moneda63=new moneda(10,445,290);
        this->monedas.append(moneda63);

        moneda *moneda64=new moneda(10,405,290);
        this->monedas.append(moneda64);

        moneda *moneda65=new moneda(10,365,290);
        this->monedas.append(moneda65);

        moneda *moneda66=new moneda(10,405,250);
        this->monedas.append(moneda66);

        moneda *moneda67=new moneda(10,365,30);
        this->monedas.append(moneda67);

        moneda *moneda68=new moneda(10,405,30);
        this->monedas.append(moneda68);

        moneda *moneda69=new moneda(10,445,30);
        this->monedas.append(moneda69);

        moneda *moneda70=new moneda(10,485,30);
        this->monedas.append(moneda70);

        moneda *moneda71=new moneda(10,525,30);
        this->monedas.append(moneda71);

        moneda *moneda72=new moneda(10,525,-10);
        this->monedas.append(moneda72);

        moneda *moneda73=new moneda(10,365,-10);
        this->monedas.append(moneda73);//*

        moneda *moneda74=new moneda(10,325,-10);
        this->monedas.append(moneda74);

        moneda *moneda75=new moneda(10,285,-10);
        this->monedas.append(moneda75);

        moneda *moneda76=new moneda(10,245,-10);
        this->monedas.append(moneda76);

        moneda *moneda77=new moneda(10,205,-10);
        this->monedas.append(moneda77);

        moneda *moneda78=new moneda(10,165,-10);
        this->monedas.append(moneda78);

        moneda *moneda79=new moneda(10,125,-10);
        this->monedas.append(moneda79);

        moneda *moneda80=new moneda(10,85,-10);
        this->monedas.append(moneda80);

        moneda *moneda81=new moneda(10,45,-10);
        this->monedas.append(moneda81);

        moneda *moneda82=new moneda(10,5,-10);
        this->monedas.append(moneda82);

        moneda *moneda83=new moneda(10,-30,-10);
        this->monedas.append(moneda83);

        moneda *moneda84=new moneda(10,-65,-10);
        this->monedas.append(moneda84);

        moneda *moneda85=new moneda(10,-65,30);
        this->monedas.append(moneda85);

        moneda *moneda86=new moneda(10,-65,70);
        this->monedas.append(moneda86);

        moneda *moneda87=new moneda(10,-30,70);
        this->monedas.append(moneda87);

        moneda *moneda88=new moneda(10,5,70);
        this->monedas.append(moneda88);

        moneda *moneda89=new moneda(10,45,30);
        this->monedas.append(moneda89);

        moneda *moneda90=new moneda(10,45,70);
        this->monedas.append(moneda90);

        moneda *moneda91=new moneda(10,85,70);
        this->monedas.append(moneda91);

        moneda *moneda92=new moneda(10,125,70);
        this->monedas.append(moneda92);

        moneda *moneda93=new moneda(10,165,70);
        this->monedas.append(moneda93);

        moneda *moneda94=new moneda(10,205,70);
        this->monedas.append(moneda94);

        moneda *moneda95=new moneda(10,245,70);
        this->monedas.append(moneda95);

        moneda *moneda96=new moneda(10,285,70);
        this->monedas.append(moneda96);

        moneda *moneda97=new moneda(10,285,30);
        this->monedas.append(moneda97);

        moneda *moneda98=new moneda(10,285,110);
        this->monedas.append(moneda98);

        moneda *moneda99=new moneda(10,285,150);
        this->monedas.append(moneda99);

        moneda *moneda100=new moneda(10,285,190);
        this->monedas.append(moneda100);

        moneda *moneda101=new moneda(10,285,230);
        this->monedas.append(moneda101);

        moneda *moneda102=new moneda(10,290,265);
        this->monedas.append(moneda102);

        moneda *moneda103=new moneda(10,290,300);
        this->monedas.append(moneda103);

//        moneda *moneda104=new moneda(10,250,300);
//        this->monedas.append(moneda104);

//        moneda *moneda105=new moneda(10,210,300);
//        this->monedas.append(moneda105);

//        moneda *moneda106=new moneda(10,170,300);
//        this->monedas.append(moneda106);

        moneda *moneda107=new moneda(10,90,270);
        this->monedas.append(moneda107);

        moneda *moneda108=new moneda(10,90,300);
        this->monedas.append(moneda108);

//        moneda *moneda109=new moneda(10,45,300);
//        this->monedas.append(moneda109);

//        moneda *moneda110=new moneda(10,10,300);
//        this->monedas.append(moneda110);

//        moneda *moneda111=new moneda(10,-35,300);
//        this->monedas.append(moneda111);

//        moneda *moneda112=new moneda(10,-80,300);
//        this->monedas.append(moneda112);

        moneda *moneda113=new moneda(10,250,230);
        this->monedas.append(moneda113);

        moneda *moneda114=new moneda(10,210,230);
        this->monedas.append(moneda114);

        moneda *moneda115=new moneda(10,170,230);
        this->monedas.append(moneda115);

        moneda *moneda116=new moneda(10,130,230);
        this->monedas.append(moneda116);

        moneda *moneda117=new moneda(10,90,230);
        this->monedas.append(moneda117);

        moneda *moneda118=new moneda(10,45,230);
        this->monedas.append(moneda118);

//        moneda *moneda119=new moneda(10,45,265);
//        this->monedas.append(moneda119);

        moneda *moneda120=new moneda(10,5,230);
        this->monedas.append(moneda120);

        moneda *moneda121=new moneda(10,5,230);
        this->monedas.append(moneda121);

        moneda *moneda122=new moneda(10,-35,230);
        this->monedas.append(moneda122);

        moneda *moneda123=new moneda(10,-75,230);
        this->monedas.append(moneda123);

        moneda *moneda124=new moneda(10,-75,150);
        this->monedas.append(moneda124);

        moneda *moneda125=new moneda(10,-35,150);
        this->monedas.append(moneda125);

        moneda *moneda126=new moneda(10,5,150);
        this->monedas.append(moneda126);

        moneda *moneda127=new moneda(10,45,150);
        this->monedas.append(moneda127);

//        moneda *moneda128=new moneda(10,45,190);
//        this->monedas.append(moneda128);

        moneda *moneda129=new moneda(10,85,190);
        this->monedas.append(moneda129);

        moneda *moneda130=new moneda(10,85,150);
        this->monedas.append(moneda130);

        moneda *moneda131=new moneda(10,85,105);
        this->monedas.append(moneda131);

//        moneda *moneda132=new moneda(10,45,105);
//        this->monedas.append(moneda132);


        moneda *moneda133=new moneda(10,365,250);
        this->monedas.append(moneda133);

        moneda *moneda134=new moneda(10,170,150);
        this->monedas.append(moneda134);

        moneda *moneda135=new moneda(10,170,190);
        this->monedas.append(moneda135);

        moneda *moneda136=new moneda(10,220,195);
        this->monedas.append(moneda136);

        moneda *moneda137=new moneda(10,220,150);
        this->monedas.append(moneda137);

        moneda *moneda138=new moneda(10,130,150);
        this->monedas.append(moneda138);

}

void MainWindow::actualizacion()
{
    int tiempo_=this->personaje->getTiempo();
    if(tiempo_<=60){
        QString textoP=QString::number(tiempo_);
        ui->tiempo->setText(textoP);
        if(this->monedas.size()==0){
            this->puntaje=0;
            this->vidas=3;
            this->nivel++;
            this->personaje->ResetTiempo();
            this->Reset();
        }
    }else{
        this->personaje->ResetTiempo();
        this->vidas--;
        this->puntaje=0;
        this->Reset();
    }

}

void MainWindow::IniciarMundo()
{
    if(this->nivel==1){
        Mundo1();
    }else if(this->nivel==2){
        Mundo2();
    }else{
        Mundo3();
    }

        for (int i=0; i<this->muros.size(); i++) {

            scene->addItem(muros.at(i));
        }



    for (int i=0; i<this->monedas.size(); i++) {

        scene->addItem(monedas.at(i));
    }
}

void MainWindow::Reset()
{

    scene=new QGraphicsScene(); //crea la escena
    personaje=new cuerpo();

    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);//define el tamaño de la escena

    scene->addItem(personaje);

    this->muros={};
    this->monedas={};
    this->IniciarMundo();




    ui->graphicsView->setScene(scene);//agrega la escena al graphics view
    QString texto=QString::number(this->vidas);
    ui->vidas->setText(texto);
    QString textoP=QString::number(this->puntaje);
    ui->puntaje->setText(textoP);
}



void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_A){//mueve a la izquierda
        personaje->left();
    /**/for (int i=0; i<monedas.size();i++) {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas=eliminarMonedas(monedas,i);
                this->puntaje+=1;
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
                this->puntaje+=1;
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
                this->puntaje+=1;
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
                this->puntaje+=1;
            }
        }/**/
        for(int i=0; i<this->muros.size();i++){
            if(personaje->collidesWithItem(this->muros[i])){
                personaje->up();//se mueve al lado contrario
                break;
            }
        }
    }
    QString textoP=QString::number(this->puntaje);
    ui->puntaje->setText(textoP);
}
