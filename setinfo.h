#ifndef SET_INFO_H
#define SET_INFO_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class set_info;
}

class SetInfo : public QDialog
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event) { event->accept(); mainwindiw->~QWidget(); }

public:
    explicit SetInfo(QWidget *parent = nullptr);
    ~SetInfo();

    void setMainWindow(QWidget *mainwindiw) { this->mainwindiw = mainwindiw; }
    void getInfo(QString& num_info, QString& date_info, QString& other_info, QString& exp_name, int& motange_num);

private slots:

    void on_num_editingFinished();

    void on_date_editingFinished();

    void on_others_editingFinished();

    void on_exp_name_editingFinished();

    void on_comboBox_currentIndexChanged(int index);
private:
    QWidget *mainwindiw;
    int motange_num;
    QString num_info, date_info, other_info, exp_name;  // 被试信息

    Ui::set_info *ui;
};

#endif // SET_INFO_H
