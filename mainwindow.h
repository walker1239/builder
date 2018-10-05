#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "comida_arequipena.h"
#include "comida_criolla.h"
#include "director.h"
#include <QPainter>
#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_comida_currentIndexChanged();

private:
    Ui::MainWindow *ui;
    Director *dir;
    Builder *ca,*cc;
    Comida *comi;
    Entrada *ent;
    Principal *pri;
    Bebida *bebi;
    Postre *pos;
    QPixmap *pixmap;
    QPen *lapiz;
    QPainter *q;

    QPainter *DrawHere;

};

#endif // MAINWINDOW_H
