#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <QWidget>
#include <QtSql/QSql>
#include <QSqlDatabase>

namespace Ui {
class ItemList;
}

class ItemList : public QWidget
{
    Q_OBJECT

public:
    explicit ItemList(QWidget *parent, const QSqlDatabase& DBConnection, int userID);
    ~ItemList();

private:
    Ui::ItemList *ui;
    QSqlDatabase DBConnection;
    int userID;

signals:


};

#endif // ITEMLIST_H