#ifndef ADDITEMDIALOG_H
#define ADDITEMDIALOG_H

#include <QDialog>
#include <QtSql/QSql>
#include <QSqlDatabase>

namespace Ui {
class AddItemDialog;
}

class AddItemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemDialog(QWidget *parent, const QSqlDatabase DBConnection, QString username);
    ~AddItemDialog();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddItemDialog *ui;
    const QSqlDatabase DBConnection;
    const QString username;

signals:
    void refresh();
};

#endif // ADDITEMDIALOG_H
