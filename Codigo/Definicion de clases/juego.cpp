#include "juego.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QMainWindow>
#include <QGraphicsScene>


objetos::objetos(QString name)//esta se va a encargar de los objetos de la escena
{
    //vamos a cargar una imagen al proyecto primero agregamos recursos
    setPixmap(QPixmap(name));//aqui cargamos la imagen dentro del objeto
    //copy(int x,int y, int ancho, int alto
}

void objetos::recortarPixmap(int x, int y, int ancho, int alto)
{
    QPixmap pixmap = this->pixmap();
    QImage image = pixmap.toImage();
    QImage croppedImage = image.copy(x, y, ancho, alto);
    setPixmap(QPixmap::fromImage(croppedImage));
}
juego::juego()
{
//aqui se agrega lo le la imagen ppixel de carga
}
