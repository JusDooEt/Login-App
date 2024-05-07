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
    explicit ItemList(QWidget *parent, const QSqlDatabase& DBConnection, QString username);
    ~ItemList();

private:
    Ui::ItemList *ui;
    QSqlDatabase DBConnection;
    QString username;

signals:


};

#endif // ITEMLIST_H
