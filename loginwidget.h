#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QDebug>
#include "itemlist.h"
#include "registerdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWidget;
}
QT_END_NAMESPACE

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private slots:
    void on_register_pushButton_clicked();

    void on_login_pushButton_clicked();

private:
    Ui::LoginWidget *ui;
    ItemList* itemListDialog;
    QSqlDatabase DBConnection;
    void createUserTable();
};
#endif // LOGINWIDGET_H
