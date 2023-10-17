#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&Dialog::lire_taux_et_fermer);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::lire_taux_et_fermer(void)
{
    taux=ui->doubleSpinBox->value();
    close();
}

double Dialog::get_taux(void)
{
    return taux;
}
