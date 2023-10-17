#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),val_euro(0),val_dollar(0),taux(1.05),dialog(new Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::convertir);
    connect(ui->actionQuitter,&QAction::triggered,this,&MainWindow::close);
    connect(ui->actionApropos,&QAction::triggered,this,&MainWindow::Apropos);
    connect(ui->actionTaux_de_change,&QAction::triggered,this,&MainWindow::ouvrir_dialog);
    connect(dialog,&QDialog::finished,this,&MainWindow::lire_taux_et_afficher);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lire_taux_et_afficher(void)
{
    taux = dialog->get_taux();
    QString text ="Taux de Conversion:1 Euro="+QString::number(taux)+"Dollar Américain";
    ui ->label_message->setText(text);
    convertir();
}
void MainWindow::ouvrir_dialog()
{
    dialog->open();
}

void MainWindow::convertir(void)
{
    val_euro=ui->doubleSpinBox_euros->value();
    val_dollar=val_euro*taux;
    ui->doubleSpinBox_dollar->setValue(val_dollar);
}

void MainWindow::Apropos(void)
{
    QMessageBox::information(this,"Apropos","Ceci est un convertisseur.\n Vous pouvez choisir le taux de conversion en selectionnant Menu. ");
}
