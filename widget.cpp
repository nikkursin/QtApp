#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QVBoxLayout* hBox = new QVBoxLayout (this);

    hBox ->setSpacing(15);


    hBox->setContentsMargins(0, 20, 0, 5);

    ProcessButton = new QPushButton ("Sign in", this);

    UserNameField = new QLineEdit ("Username", this);

    UserPasswordField = new QLineEdit ("Password", this);

    ProcessButton->setFixedSize(100, 35);

    UserNameField->setFixedSize(180, 25);

    UserPasswordField->setFixedSize(180, 25);

    hBox ->addWidget(UserNameField, 0, Qt::AlignHCenter | Qt::AlignTop);

    hBox -> addWidget(UserPasswordField, 0, Qt::AlignHCenter | Qt::AlignTop);

   hBox ->addWidget(ProcessButton, 0, Qt::AlignHCenter | Qt::AlignTop );

    setLayout(hBox);
}

Widget::~Widget() {
   delete ProcessButton;
   delete UserNameField;
   delete UserPasswordField;
}
