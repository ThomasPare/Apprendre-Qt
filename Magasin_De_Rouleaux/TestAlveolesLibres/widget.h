#ifndef WIDGET_H
#define WIDGET_H
#include "alveoleslibres.h"

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonReserver_clicked();

private:
    Ui::Widget *ui;
    AlveolesLibres mesAlveoles;
};

#endif // WIDGET_H
