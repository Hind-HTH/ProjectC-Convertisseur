#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void lire_taux_et_fermer(void);
    double get_taux(void);

private:
    Ui::Dialog *ui;
    double taux;
};

#endif // DIALOG_H
