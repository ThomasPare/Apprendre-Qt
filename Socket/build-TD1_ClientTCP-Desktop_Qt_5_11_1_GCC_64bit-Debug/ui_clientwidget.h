/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxConnexion;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIPServeur;
    QLineEdit *lineEditIPServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumeroPort;
    QLineEdit *lineEditNumeroPort;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtat;
    QGroupBox *groupBoxInfo;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonNomOrdinateur;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonProcesseur;
    QPushButton *pushButtonOS;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditNomMachine;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditArchitecture;
    QLineEdit *lineEditOS;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(698, 401);
        layoutWidget = new QWidget(ClientWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 671, 381));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBoxConnexion = new QGroupBox(layoutWidget);
        groupBoxConnexion->setObjectName(QStringLiteral("groupBoxConnexion"));
        layoutWidget_2 = new QWidget(groupBoxConnexion);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(12, 30, 651, 151));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelIPServeur = new QLabel(layoutWidget_2);
        labelIPServeur->setObjectName(QStringLiteral("labelIPServeur"));

        horizontalLayout->addWidget(labelIPServeur);

        lineEditIPServeur = new QLineEdit(layoutWidget_2);
        lineEditIPServeur->setObjectName(QStringLiteral("lineEditIPServeur"));

        horizontalLayout->addWidget(lineEditIPServeur);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNumeroPort = new QLabel(layoutWidget_2);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout_2->addWidget(labelNumeroPort);

        lineEditNumeroPort = new QLineEdit(layoutWidget_2);
        lineEditNumeroPort->setObjectName(QStringLiteral("lineEditNumeroPort"));

        horizontalLayout_2->addWidget(lineEditNumeroPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonQuitter = new QPushButton(layoutWidget_2);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_3->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(layoutWidget_2);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        horizontalLayout_3->addWidget(pushButtonConnexion);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelEtatConnexion = new QLabel(layoutWidget_2);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        verticalLayout_2->addWidget(labelEtatConnexion);

        textEditEtat = new QTextEdit(layoutWidget_2);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));

        verticalLayout_2->addWidget(textEditEtat);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(groupBoxConnexion);

        groupBoxInfo = new QGroupBox(layoutWidget);
        groupBoxInfo->setObjectName(QStringLiteral("groupBoxInfo"));
        layoutWidget_3 = new QWidget(groupBoxInfo);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 31, 601, 141));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonNomOrdinateur = new QPushButton(layoutWidget_3);
        pushButtonNomOrdinateur->setObjectName(QStringLiteral("pushButtonNomOrdinateur"));

        verticalLayout_4->addWidget(pushButtonNomOrdinateur);

        pushButtonNomUtilisateur = new QPushButton(layoutWidget_3);
        pushButtonNomUtilisateur->setObjectName(QStringLiteral("pushButtonNomUtilisateur"));

        verticalLayout_4->addWidget(pushButtonNomUtilisateur);

        pushButtonProcesseur = new QPushButton(layoutWidget_3);
        pushButtonProcesseur->setObjectName(QStringLiteral("pushButtonProcesseur"));

        verticalLayout_4->addWidget(pushButtonProcesseur);

        pushButtonOS = new QPushButton(layoutWidget_3);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        verticalLayout_4->addWidget(pushButtonOS);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEditNomMachine = new QLineEdit(layoutWidget_3);
        lineEditNomMachine->setObjectName(QStringLiteral("lineEditNomMachine"));
        lineEditNomMachine->setCursor(QCursor(Qt::ArrowCursor));
        lineEditNomMachine->setReadOnly(true);

        verticalLayout_3->addWidget(lineEditNomMachine);

        lineEditNomUtilisateur = new QLineEdit(layoutWidget_3);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));
        lineEditNomUtilisateur->setCursor(QCursor(Qt::ArrowCursor));
        lineEditNomUtilisateur->setReadOnly(true);

        verticalLayout_3->addWidget(lineEditNomUtilisateur);

        lineEditArchitecture = new QLineEdit(layoutWidget_3);
        lineEditArchitecture->setObjectName(QStringLiteral("lineEditArchitecture"));
        lineEditArchitecture->setCursor(QCursor(Qt::ArrowCursor));
        lineEditArchitecture->setReadOnly(true);

        verticalLayout_3->addWidget(lineEditArchitecture);

        lineEditOS = new QLineEdit(layoutWidget_3);
        lineEditOS->setObjectName(QStringLiteral("lineEditOS"));
        lineEditOS->setCursor(QCursor(Qt::ArrowCursor));
        lineEditOS->setReadOnly(true);

        verticalLayout_3->addWidget(lineEditOS);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBoxInfo);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxConnexion->setTitle(QApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelIPServeur->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        labelNumeroPort->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        labelEtatConnexion->setText(QApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBoxInfo->setTitle(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomOrdinateur->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonProcesseur->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOS->setText(QApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
