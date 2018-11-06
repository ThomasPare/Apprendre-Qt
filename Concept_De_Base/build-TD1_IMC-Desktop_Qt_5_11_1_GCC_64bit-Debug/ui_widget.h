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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPoids;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSuite;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEditAfficheur;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(466, 545);
        Widget->setMinimumSize(QSize(466, 545));
        Widget->setMaximumSize(QSize(466, 545));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 421, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 2, 421, 382));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNom = new QLabel(layoutWidget);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        horizontalLayout->addWidget(labelNom);

        lineEditNom = new QLineEdit(layoutWidget);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelPrenom = new QLabel(layoutWidget);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        horizontalLayout_2->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(layoutWidget);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelSexe = new QLabel(layoutWidget);
        labelSexe->setObjectName(QStringLiteral("labelSexe"));

        horizontalLayout_3->addWidget(labelSexe);

        radioButtonFemme = new QRadioButton(layoutWidget);
        radioButtonFemme->setObjectName(QStringLiteral("radioButtonFemme"));

        horizontalLayout_3->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(layoutWidget);
        radioButtonHomme->setObjectName(QStringLiteral("radioButtonHomme"));

        horizontalLayout_3->addWidget(radioButtonHomme);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelAge = new QLabel(layoutWidget);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        horizontalLayout_4->addWidget(labelAge);

        spinBoxAge = new QSpinBox(layoutWidget);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);
        spinBoxAge->setValue(20);

        horizontalLayout_4->addWidget(spinBoxAge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelPoids = new QLabel(layoutWidget);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        horizontalLayout_5->addWidget(labelPoids);

        doubleSpinBoxPoids = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setDecimals(1);
        doubleSpinBoxPoids->setMinimum(15);
        doubleSpinBoxPoids->setMaximum(300);
        doubleSpinBoxPoids->setSingleStep(0.1);
        doubleSpinBoxPoids->setValue(50);

        horizontalLayout_5->addWidget(doubleSpinBoxPoids);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelTaille = new QLabel(layoutWidget);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        horizontalLayout_6->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.5);
        doubleSpinBoxTaille->setMaximum(3);
        doubleSpinBoxTaille->setSingleStep(0.01);
        doubleSpinBoxTaille->setValue(1.5);

        horizontalLayout_6->addWidget(doubleSpinBoxTaille);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButtonSuite = new QPushButton(layoutWidget);
        pushButtonSuite->setObjectName(QStringLiteral("pushButtonSuite"));

        horizontalLayout_7->addWidget(pushButtonSuite);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 11, 392, 391));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        textEditAfficheur = new QTextEdit(layoutWidget1);
        textEditAfficheur->setObjectName(QStringLiteral("textEditAfficheur"));

        verticalLayout_5->addWidget(textEditAfficheur);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonDevine = new QPushButton(layoutWidget1);
        pushButtonDevine->setObjectName(QStringLiteral("pushButtonDevine"));

        verticalLayout_4->addWidget(pushButtonDevine);

        pushButtonLorentz = new QPushButton(layoutWidget1);
        pushButtonLorentz->setObjectName(QStringLiteral("pushButtonLorentz"));

        verticalLayout_4->addWidget(pushButtonLorentz);

        pushButtonLorentzAge = new QPushButton(layoutWidget1);
        pushButtonLorentzAge->setObjectName(QStringLiteral("pushButtonLorentzAge"));

        verticalLayout_4->addWidget(pushButtonLorentzAge);


        horizontalLayout_10->addLayout(verticalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_2, QString());
        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 500, 461, 27));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        pushButtonQuitter = new QPushButton(layoutWidget2);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_9->addWidget(pushButtonQuitter);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        labelNom->setText(QApplication::translate("Widget", "Nom", nullptr));
        labelPrenom->setText(QApplication::translate("Widget", "Pr\303\251nom", nullptr));
        labelSexe->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelAge->setText(QApplication::translate("Widget", "Age", nullptr));
        labelPoids->setText(QApplication::translate("Widget", "Poids (kg)", nullptr));
        labelTaille->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite->setText(QApplication::translate("Widget", "Suite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Informations personnelles", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Lorentz", nullptr));
        pushButtonLorentzAge->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Cacul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
