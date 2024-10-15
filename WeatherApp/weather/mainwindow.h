#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include "settingsform.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void fetchWeatherData(); // Slot to fetch data
    void fetchWeatherIcon(); // Slot to fetch weather icon
    void onWeatherDataReceived(QNetworkReply* reply); // Slot to handle the reply
    void onWeatherIconReceived(QNetworkReply* reply); // Slot to handle the reply
    void on_getWeather_clicked();

    void on_actionExit_triggered();

    void on_actionSettings_triggered();

private:
    Ui::MainWindow *ui;
    SettingsForm *settingsForm;
    QNetworkAccessManager *networkManager; // Manager for HTTP requests
    QString weatherIconURL;
    struct Weather
    {
        QString temp, description, humidity;
    };
    Weather *myWeather;
};
#endif // MAINWINDOW_H
