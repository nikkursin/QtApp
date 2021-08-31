#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <widget.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private:
    QPushButton* ProcessButton;
    QLineEdit* UserNameField;
    QLineEdit* UserPasswordField;

};
#endif // WIDGET_H
