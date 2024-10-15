#ifndef SETTINGSFORM_H
#define SETTINGSFORM_H

#include <QMainWindow>

namespace Ui {
class SettingsForm;
}

class SettingsForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingsForm(QWidget *parent = nullptr);
    ~SettingsForm();

private slots:
    void on_closeButton_clicked();

private:
    Ui::SettingsForm *ui;
};

#endif // SETTINGSFORM_H
