#include "additemdialog.h"
#include "qsqlquery.h"
#include "ui_additemdialog.h"

AddItemDialog::AddItemDialog(QWidget *parent, const QSqlDatabase DBConnection, QString username)
    : QDialog(parent)
    , ui(new Ui::AddItemDialog)
    , DBConnection(DBConnection)
    , username(username)
{
    ui->setupUi(this);
}

AddItemDialog::~AddItemDialog()
{
    delete ui;
}

void AddItemDialog::on_buttonBox_accepted()
{
    QString name = ui->nameLineEdit->text();
    QString price = QString::number(ui->priceSpinBox->value());
    QString quantity = QString::number(ui->quantitySpinBox->value());

    QString queryStr = "INSERT INTO items (username, name, amount, price) VALUES('" +
                       username + "', '" + name + "', '" + quantity + "', '" + price + "');";

    QSqlQuery queryInsertUser(DBConnection);
    if(queryInsertUser.prepare(queryStr))
    {
        if(queryInsertUser.exec())
        {
            qDebug() << "User: " << username;
            qDebug() << "name: " << name;
            qDebug() << "quantity: " << quantity;
            qDebug() << "price: " << price;
            qDebug() << "Registed in the database";
        }

    }

    close();

    emit refresh();
}



void AddItemDialog::on_buttonBox_rejected()
{
    close();
}

