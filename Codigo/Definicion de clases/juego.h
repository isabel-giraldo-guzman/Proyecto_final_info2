#ifndef JUEGO_H
#define JUEGO_H
#ifndef OBJETOS_H
#define OBJETOS_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QMainWindow>
#include <QGraphicsScene>
#include "objetos.h"

//le damos a objetos herencia publico de Qobjet y QGI

class objetos :public QObject,public QGraphicsPixmapItem//esta se va a encargar de los objetos de la escena
{
    Q_OBJECT //see utiliza para usar esa clase
public:
    objetos(QString name);
    void recortarPixmap(int x, int y, int ancho, int alto);
};

#endif // OBJETOS_H
#include <QObject>

class juego
{
public:
    juego();
};

#endif // JUEGO_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


