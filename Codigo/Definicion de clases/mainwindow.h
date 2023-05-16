#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "juego.h"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QGraphicsScene>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *teclas);//para el control de las teclas del teclado
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    juego *abuela;//se representa todo lo de la abuelita
    juego *nieto;//se representa con time lo del nieto(para que se mueva solo)
    juego *chanclas;//chanclas que lanza la abuela
    juego *escena;//el que se encarga de proyectar "lo que ve el usuario"
    juego *mapa;//la estructura del nivel completa
};
#endif // MAINWINDOW_H


