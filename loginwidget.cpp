#include "loginwidget.h"
#include "qsqlquery.h"
#include "ui_loginwidget.h"


LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    // Member Initiializations
    ui->setupUi(this);
    itemListDialog = nullptr;

    DBConnection = QSqlDatabase::addDatabase("QSQLITE");
    DBConnection.setDatabaseName(QCoreApplication::applicationDirPath() + "/Login-Test.db");

    // Validate Database connection
    if(DBConnection.open())
    {
        qDebug() << "Database Connected";
    }
    else
    {
        qDebug() << "Database not connected";
    }

    // Create a table for users if the database is empty
    if(!DBConnection.tables().size())
    {
        createUserTable();
    }
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::createUserTable()
{
    QSqlQuery createUserTable(DBConnection);
    QString query = "CREATE TABLE users (";
    query += "username TEXT PRIMARY KEY UNIQUE NOT NULL, ";
    query += "email TEXT NOT NULL UNIQUE," ;
    query += "password TEXT NOT NULL);";
    if(createUserTable.prepare(query))
    {
        if(createUserTable.exec())
        {
            qDebug() << "Table Created: " << DBConnection.tables().first();
        }
        else
        {
            qDebug() << "Could not execute query.";
        }
    }
    else
    {
        qDebug() << "Query preperation Unsuccessful.";
    }
}

void LoginWidget::on_register_pushButton_clicked()
{
    this->setDisabled(true);
    RegisterDialog* registerDialog = new RegisterDialog(this, DBConnection);
    registerDialog->show();
    connect(registerDialog, &QDialog::finished, this, [=](){
        qDebug() << "Register Dialog closed";
        this->setEnabled(true);
    });
}

