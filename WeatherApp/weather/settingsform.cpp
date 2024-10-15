#include "settingsform.h"
#include "ui_settingsform.h"
#include "settings.h"

SettingsForm::SettingsForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SettingsForm)
{
    ui->setupUi(this);
    QString apiUrl = settings.value("api_url").toString();
    QString iconUrl = settings.value("icon_url").toString();
    QString key = settings.value("key").toString();
    ui->iconURLLineEdit->setText(iconUrl);
    ui->apiURLLineEdit->setText(apiUrl);
    ui->keyLineEdit->setText(key);
}

SettingsForm::~SettingsForm()
{
    delete ui;
}

void SettingsForm::on_closeButton_clicked()
{
    hide();
}


void SettingsForm::on_saveButton_clicked()
{
    QString apiUrl = ui->apiURLLineEdit->text();
    QString iconUrl = ui->iconURLLineEdit->text();
    QString key = ui->keyLineEdit->text();

    settings.setValue("api_url", apiUrl);
    settings.setValue("icon_url", iconUrl);
    settings.setValue("key", key);
    settings.sync();
    hide();
}

