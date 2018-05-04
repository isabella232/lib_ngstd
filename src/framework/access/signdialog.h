#ifndef SIGNDIALOG_H
#define SIGNDIALOG_H

#include <QDialog>

namespace Ui {
class NGSignDialog;
}

class NGSignDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NGSignDialog(QWidget *parent = nullptr);
    ~NGSignDialog();
    void update();

private slots:
    void onSignClicked();

private:
    Ui::NGSignDialog *ui;
};

#endif // SIGNDIALOG_H
