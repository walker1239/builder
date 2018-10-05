#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    comi=new Comida();
    pixmap=new QPixmap(550,300);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->entradai->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
  }

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_comida_currentIndexChanged()
{

    switch(ui->comida->currentIndex())
    {
        case 1:{
            dir->set_builder(new Comida_arequipena());
            comi=dir->get_comida();
            ent=comi->get_Entrada();
            pri=comi->get_Principal();
            bebi=comi->get_Bebida();
            pos=comi->get_Postre();

            QImage image1(ent->get_image().c_str());
            q->drawImage(20,130,image1);

            QImage image2(pri->get_image().c_str());
            q->drawImage(145,150,image2);


            QImage image3(bebi->get_image().c_str());
            q->drawImage(270,150,image3);


            QImage image4(pos->get_image().c_str());
            q->drawImage(400,150,image4);

            break;
        }
        case 2:{
            dir->set_builder(new Comida_criolla());
            comi=dir->get_comida();
            ent=comi->get_Entrada();
            pri=comi->get_Principal();
            bebi=comi->get_Bebida();
            pos=comi->get_Postre();
            QImage image5(ent->get_image().c_str());
            q->drawImage(20,130,image5);

            QImage image6(pri->get_image().c_str());
            q->drawImage(145,150,image6);

            QImage image7(bebi->get_image().c_str());
            q->drawImage(270,150,image7);

            QImage image8(pos->get_image().c_str());
            q->drawImage(400,150,image8);

        break;
        }

    }

    ui->entradai->setPixmap(*pixmap);
    pixmap->fill(QColor(255,255,255));
}
