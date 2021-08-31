#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QVBoxLayout* A = new QVBoxLayout (this);

 // QScopedPointer <QHBoxLayout> hBoxPtr (A);

    A->setSpacing(15);

    B = new QPushButton ("Sign in", this);

    QPushButton* Hi = new QPushButton ("Register", this);

    Hi->setFixedSize(100, 45);

    B->setFixedSize(100, 35);

   // QScopedPointer <QPushButton> hButton (B);



    A->addWidget(B, 0, Qt::AlignHCenter );
    A->addWidget(Hi, 0, Qt::AlignHCenter);



}

Widget::~Widget() {

}
