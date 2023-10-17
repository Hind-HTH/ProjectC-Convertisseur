/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTaux_de_change;
    QAction *actionQuitter;
    QAction *actionApropos;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_euros;
    QPushButton *pushButton;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_dollar;
    QLabel *label_message;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuPropos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(327, 389);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"Comic Sans MS\";\n"
"background-color: rgb(51, 0, 152);"));
        actionTaux_de_change = new QAction(MainWindow);
        actionTaux_de_change->setObjectName("actionTaux_de_change");
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName("actionQuitter");
        actionApropos = new QAction(MainWindow);
        actionApropos->setObjectName("actionApropos");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBox_euros = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_euros->setObjectName("doubleSpinBox_euros");

        gridLayout->addWidget(doubleSpinBox_euros, 1, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"\n"
"font: 12pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        doubleSpinBox_dollar = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_dollar->setObjectName("doubleSpinBox_dollar");

        gridLayout->addWidget(doubleSpinBox_dollar, 3, 1, 1, 1);

        label_message = new QLabel(centralwidget);
        label_message->setObjectName("label_message");

        gridLayout->addWidget(label_message, 4, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Algerian\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 327, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuPropos = new QMenu(menubar);
        menuPropos->setObjectName("menuPropos");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuPropos->menuAction());
        menuMenu->addAction(actionTaux_de_change);
        menuMenu->addAction(actionQuitter);
        menuPropos->addAction(actionApropos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionTaux_de_change->setText(QCoreApplication::translate("MainWindow", "Taux de change", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionApropos->setText(QCoreApplication::translate("MainWindow", "A propos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Valeur en Euro", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Convertir", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valeur en Dollar", nullptr));
        label_message->setText(QCoreApplication::translate("MainWindow", "Taux de conversion: 1 euro = 1,05 dollar am\303\251ricain", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Convertisseur", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuPropos->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
