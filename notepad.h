#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

namespace Ui {
class notepad;
}

class notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit notepad(QWidget *parent = 0);
    ~notepad();

private slots:
    void on_quitbutton_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void process_line(QString line);

    void on_pushButton_clicked();

private:
    Ui::notepad *ui;
};

#endif // NOTEPAD_H
