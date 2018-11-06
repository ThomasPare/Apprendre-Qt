/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBoxOperations;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QPushButton *pushButtonEnvoi;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonNumeroDeCompte;
    QLineEdit *lineEditCompte;
    QLabel *labelMontant;
    QLineEdit *lineEditMontant;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonConnexion;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMessage;
    QTextEdit *textEditMessage;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelEtat;
    QListWidget *listWidgetEtat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(608, 494);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBoxOperations = new QGroupBox(centralWidget);
        groupBoxOperations->setObjectName(QStringLiteral("groupBoxOperations"));
        groupBoxOperations->setGeometry(QRect(69, 229, 461, 181));
        layoutWidget = new QWidget(groupBoxOperations);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 42, 82, 114));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(layoutWidget);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));

        verticalLayout->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(layoutWidget);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));

        verticalLayout->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(layoutWidget);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));

        verticalLayout->addWidget(radioButtonDepot);

        pushButtonEnvoi = new QPushButton(layoutWidget);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));

        verticalLayout->addWidget(pushButtonEnvoi);

        layoutWidget_2 = new QWidget(groupBoxOperations);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 50, 271, 58));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonNumeroDeCompte = new QPushButton(layoutWidget_2);
        pushButtonNumeroDeCompte->setObjectName(QStringLiteral("pushButtonNumeroDeCompte"));

        gridLayout->addWidget(pushButtonNumeroDeCompte, 0, 0, 1, 1);

        lineEditCompte = new QLineEdit(layoutWidget_2);
        lineEditCompte->setObjectName(QStringLiteral("lineEditCompte"));

        gridLayout->addWidget(lineEditCompte, 0, 1, 1, 1);

        labelMontant = new QLabel(layoutWidget_2);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));

        gridLayout->addWidget(labelMontant, 1, 0, 1, 1);

        lineEditMontant = new QLineEdit(layoutWidget_2);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));

        gridLayout->addWidget(lineEditMontant, 1, 1, 1, 1);

        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(59, 19, 211, 58));
        gridLayout_2 = new QGridLayout(layoutWidget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAdresse = new QLabel(layoutWidget_3);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        gridLayout_2->addWidget(labelAdresse, 0, 0, 1, 1);

        lineEditAdresse = new QLineEdit(layoutWidget_3);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        gridLayout_2->addWidget(lineEditAdresse, 0, 1, 1, 1);

        labelPort = new QLabel(layoutWidget_3);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        gridLayout_2->addWidget(labelPort, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(layoutWidget_3);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout_2->addWidget(lineEditPort, 1, 1, 1, 1);

        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(129, 99, 91, 25));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(70, 160, 471, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelMessage = new QLabel(layoutWidget_4);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));

        verticalLayout_3->addWidget(labelMessage);

        textEditMessage = new QTextEdit(layoutWidget_4);
        textEditMessage->setObjectName(QStringLiteral("textEditMessage"));

        verticalLayout_3->addWidget(textEditMessage);

        layoutWidget_5 = new QWidget(centralWidget);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(289, 9, 251, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelEtat = new QLabel(layoutWidget_5);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));

        verticalLayout_2->addWidget(labelEtat);

        listWidgetEtat = new QListWidget(layoutWidget_5);
        listWidgetEtat->setObjectName(QStringLiteral("listWidgetEtat"));

        verticalLayout_2->addWidget(listWidgetEtat);

        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 608, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        groupBoxOperations->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        pushButtonNumeroDeCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port :", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelMessage->setText(QApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        labelEtat->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
