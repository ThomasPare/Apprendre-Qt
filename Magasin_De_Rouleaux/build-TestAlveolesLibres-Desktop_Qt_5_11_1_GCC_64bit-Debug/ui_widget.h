/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidgetRangeeColonneOccupe;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidgetAlveoleLibre;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(555, 399);
        pushButtonReserver = new QPushButton(Widget);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(240, 150, 80, 25));
        pushButtonLiberer = new QPushButton(Widget);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(240, 210, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(90, 310, 381, 71));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(367, 20, 181, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listWidgetRangeeColonneOccupe = new QListWidget(layoutWidget);
        listWidgetRangeeColonneOccupe->setObjectName(QStringLiteral("listWidgetRangeeColonneOccupe"));

        verticalLayout->addWidget(listWidgetRangeeColonneOccupe);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 181, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        listWidgetAlveoleLibre = new QListWidget(layoutWidget1);
        listWidgetAlveoleLibre->setObjectName(QStringLiteral("listWidgetAlveoleLibre"));

        verticalLayout_2->addWidget(listWidgetAlveoleLibre);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonReserver->setText(QApplication::translate("Widget", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("Widget", "<< Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        label_2->setText(QApplication::translate("Widget", "Rang\303\251es & colonnes occup\303\251es", nullptr));
        label->setText(QApplication::translate("Widget", "Num\303\251ro d'alv\303\251oles libres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
