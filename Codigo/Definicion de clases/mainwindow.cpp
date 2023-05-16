#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

class Juego{

};
class Abuela{//Que herede de grapichs item como mi esfera
    double gravedad_a;//gravedad inicial en el juego
    double x;//posicion inicial en x de la abuela
    double y;//posicion inicial de y de la abueña
    double velocidad_x;//velocidad del movimiento en x de la abuela
    double velocidad_y;//velocidad del salto en y de la abuela

public:
    Abuela(double _X, double _y, double gravedad_a, double velocidad_x, double velocidad_y){//parametros de incializacion de las funciones asociadas a la abuela
        void mover_personaje_a();//keypress; este solo mueve de izquierda a derecha el personaje
        void saltar_a();//como es un salto parabolico se separa de mover personaje
        void lanzar_chancla_n();//se verifica la existencia de la chancla y se define el movimiento de ella(parabolico)
        void lanzar_chancla_s();//se verifica la existencia de la super chancla y se define el movimiento de ella(uniformemente acelerado)
    }
};
Abuela::Abuela(double _x, double _y, double gravedad_a, double velocidad_x, double velocidad_y){
    x= _x//posicion en x
        y= _y//posicion en y
            g= gravedad_a//gravedad del juego
            v_x= velocidad_x//velocidad en x de la abuela
            v_y= velocidad_y//velocidad en y de la abuela
}
void Abuela::mover_personaje_a(){
 //se define el metodo mover personaje usando keypress
}
void Abuela::saltar_a(){
 //se define el movimiento parabolico para el salto
}
void Abuela::lanzar_chancla_n(){
   //se define el movimiento parabolico para la chancla normal
}
void Abuela::lanzar_chancla_s(){
    //se define el movimiento uniformemente acelerado para la super chancla
}

class Nieto{//Que herede de grapichs item como mi esfera
    double gravedad_a;//gravedad inicial en el juego
    double x;//posicion inicial en x de la abuela
    double y;//posicion inicial de y de la abueña
    double velocidad_x;//velocidad del movimiento en x de la abuela
    double velocidad_y;//velocidad del salto en y de la abuela

public:
    Nieto(double _X, double _y, double gravedad_a, double velocidad_x, double velocidad_y){//parametros de incializacion de las funciones asociadas al nieto
        void mover_personaje_nieto();//keypress; este solo mueve de izquierda a derecha el personaje
        void saltar_nieto();//como es un salto parabolico se separa de mover personaje
    }
};
Nieto::Nieto(double _x, double _y, double gravedad_a, double velocidad_x, double velocidad_y){
    x= _x//posicion en x
        y= _y//posicion en y
            g= gravedad_a//gravedad del juego
            v_x= velocidad_x//velocidad en x del nieto
            v_y= velocidad_y//velocidad en y del nieto
}
void Nieto::mover_personaje_nieto(){
    //se define el metodo mover personaje con la implimentacion qtimer(para un movimiento automatico del personaje)
    //cada cierto tiempo envia la señal para desplazar al personaje
}
void Nieto::saltar_nieto(){
    //se define el movimiento parabolico para el salto del nieto cuando choque con algun objeto difeente de la chancla
}





MainWindow::~MainWindow()
{
    delete ui;
}


/*#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QMainWindow>
#include <QGraphicsScene>
#include "objetos.h"
#include <QImage>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    escena=new QGraphicsScene;//definimos la variable escena en la memoria
    nieto= new objetos("linck del sprite nieto");//creamos un objeto llamado nieto
    ui->setupUi(this);
    //definimos que la presentacion por el alto y ancho del graphisview se resta 2 para evitar que
    //salgan scrolls
    escena->setSceneRect(0,0,ui->graphicsView->width()-2,ui->graphicsView->height()-2);//aqui representamos el x,y de la ecena, y el x y y que representamos
    //decimos que 0,0 para que inicie en la esquina del graphisview
    //ya le damos un tamaño el cual va a ser toda la pantalla o escena en este caso
    ui->graphicsView->setScene(escena);//cargamos la escena en el GV
    //sobre la escena que acabamos de hacer podemos agregar todo lo que queramos
    nieto->setPos(0,0);//colocamos la pos del enemigo y luego lo cargamos//luego usamos pos para
    //que se muevan
    escena->addItem(nieto);//agregamos a la ecena
    //escena->removeItem(enemigo);//aqui reovemos el enemigo
    ui->graphicsView->setScene(escena);
    abuela=new objetos("sprite abuela");

    //eligimos de donde a donde recortar
    int cambio_imagen=2;//representa la imagen donde esta
    int x =0;//pocicion x 0
    int y =42*(cambio_imagen);//pos y 0 aumente el y para bajar en imagenes
    int ancho = 39;
    int alto = 42;
    //recortamos la imagen
    abuela->recortarPixmap(x,y,ancho,alto);
    //QImage personaje_solo=caras_personaje.copy(x,y,ancho,alto);
    escena->addItem(abuela);
    ui->graphicsView->setScene(escena);
    escena->removeItem(abuela);
    delete abuela;

    ui->graphicsView->setScene(escena);

}

void MainWindow::keyPressEvent(QKeyEvent *teclas)
{//buscar qt keys para los ifs
    //aqui se esta moviendo el enemigo con WASD,la cantidad de 1 pixel

    //como lo que se mueve lo puedo integrar en abuela

}
void MainWindow::Abuela(x,y,ancho,alto)
{

}

MainWindow::~MainWindow()
{
    delete escena;
    delete ui;
    delete abuela;
    delete nieto;
}
/*
