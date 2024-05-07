#include "itemlist.h"
#include "ui_itemlist.h"

ItemList::ItemList(QWidget *parent, const QSqlDatabase& DBConnection, QString username)
    : QWidget(parent)
    , ui(new Ui::ItemList)
{
    // Initialize Members
    ui->setupUi(this);
    this->DBConnection = DBConnection;
    this->username = username;
}

ItemList::~ItemList()
{
    delete ui;
}
