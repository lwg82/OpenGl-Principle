#ifndef FORMDRAWPOINTS_H
#define FORMDRAWPOINTS_H

#include <QWidget>

namespace Ui {
class FormDrawPoints;
}

class FormDrawPoints : public QWidget
{
    Q_OBJECT

public:
    explicit FormDrawPoints(QWidget *parent = 0);
    ~FormDrawPoints();

private:
    Ui::FormDrawPoints *ui;
};

#endif // FORMDRAWPOINTS_H
