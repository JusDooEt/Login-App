#include "itemlist.h"
#include "qmessagebox.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "ui_itemlist.h"


ItemList::ItemList(QWidget *parent, const QSqlDatabase DBConnection, QString username)
    : QWidget(parent)
    , ui(new Ui::ItemList)
    , DBConnection(DBConnection)
    , username(username)
{
    // Initialize Members
    ui->setupUi(this);
    //this->DBConnection = DBConnection;
    //this->username = username;
    deletable = false;

    connect(this, &ItemList::refreshList, this, &ItemList::onRefresh);

    emit refreshList();
}

ItemList::~ItemList()
{
    delete ui;
}

void ItemList::onRefresh()
{
    QSqlQuery queryFindItem(this->DBConnection);
    QString   queryStr;

    ui->itemView->clear();
    itemID.clear();
    deletable = false;

    queryStr = "SELECT * FROM items WHERE username='" + username + "';";

    if(queryFindItem.prepare(queryStr))
    {
        if (queryFindItem.exec())
        {
            while (queryFindItem.next())
            {
                ui->itemView->addItem(queryFindItem.value("name").toString() + ": $" + queryFindItem.value("price").toString());
                itemID.push_back(queryFindItem.value("itemID").toInt());
            }
        }
        else
        {
            qDebug() << "<ERROR> - " << QSqlError().text();
        }
    }
    else
    {
        qDebug() << "<ERROR> - " << QSqlError().text();
    }
}

void ItemList::on_addButton_clicked()
{
    AddItemDialog* addDialog = new AddItemDialog(this, DBConnection, username);
    addDialog->show();
    connect(addDialog, &AddItemDialog::refresh, this, &ItemList::onRefresh);

}


void ItemList::on_deleteButton_clicked()
{
    if (!deletable)
    {
        QMessageBox::information(this, "Select an Item", "Please select an item to delete.");
        return;
    }
    else
    {
        QSqlQuery queryDeleteItem(this->DBConnection);
        QString   queryStr = "DELETE FROM items WHERE itemID = " + QString::number(itemID[itemSelected]) + ";";

        if(queryDeleteItem.prepare(queryStr))
        {
            if (!queryDeleteItem.exec())
            {
                qDebug() << "<ERROR> - " << QSqlError().text();
            }
        }
        else
        {
            qDebug() << "<ERROR> - " << QSqlError().text();
        }
    }
    emit refreshList();

}

void ItemList::on_itemView_itemClicked(QListWidgetItem *item)
{
    itemSelected = ui->itemView->row(item);
    deletable = true;
}


void ItemList::on_clearButton_clicked()
{
    QSqlQuery queryClearUserItems(this->DBConnection);
    QString   queryStr;

    queryStr = "DELETE FROM items WHERE username='" + username + "';";

    if(queryClearUserItems.prepare(queryStr))
    {
        if (!queryClearUserItems.exec())
        {
            qDebug() << "<ERROR> - " << QSqlError().text();
        }
    }
    else
    {
        qDebug() << "<ERROR> - " << QSqlError().text();
    }

    emit refreshList();
}

