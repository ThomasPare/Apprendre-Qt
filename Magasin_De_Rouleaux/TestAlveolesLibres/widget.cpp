#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    mesAlveoles(4,5)
{
    ui->setupUi(this);
    ui->pushButtonLiberer->setEnabled(false);
    for(const int alveole : mesAlveoles){
        ui->listWidgetAlveoleLibre->addItem(QString::number(alveole));
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonReserver_clicked()
{

}
