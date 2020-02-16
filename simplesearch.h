#ifndef SIMPLESEARCH_H
#define SIMPLESEARCH_H

#include <QWidget>

namespace Ui {
class simplesearch;
}

class simplesearch : public QWidget
{
    Q_OBJECT

public:
    explicit simplesearch(QWidget *parent = 0);
    ~simplesearch();

private:
    Ui::simplesearch *ui;
};

#endif // SIMPLESEARCH_H
