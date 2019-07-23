#ifndef DIALOGAPROPOS_H
#define DIALOGAPROPOS_H

#include <QDialog>

namespace Ui {
class Dialogapropos;
}

class Dialogapropos : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogapropos(QWidget *parent = nullptr);
    ~Dialogapropos();

private slots:
    void quitterapropos();

private:
    Ui::Dialogapropos *ui;
};

#endif // DIALOGAPROPOS_H
