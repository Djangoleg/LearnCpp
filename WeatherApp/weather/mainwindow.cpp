#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "settings.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QtCore/QJsonArray>
#include <QPixmap>
#include <QStatusBar>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settingsForm = new SettingsForm(this);
    myWeather = new Weather;
    ui->temperatureLabel->clear();
    ui->humidityLabel->clear();
    ui->descriptionLabel->clear();
    ui->pixmapLabel->clear();
    statusBar()->showMessage(tr("Hi, dude!"), 2000);
    settings.sync();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fetchWeatherIcon(QString weatherIconName) {
    QString iconUrl = settings.value("icon_url").toString();
    QString weatherIconURL = iconUrl + weatherIconName + "@4x.png";

    if (!iconUrl.isEmpty() && !weatherIconURL.isEmpty())
    {
        networkManager = new QNetworkAccessManager(this);
        connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onWeatherIconReceived);
        QNetworkRequest request;
        request.setUrl(QUrl(weatherIconURL));
        // Send the GET request
        networkManager->get(request);
    }
    else
    {
        statusBar()->showMessage(tr("Check icon URL in settings."));
    }
}

void MainWindow::onWeatherIconReceived(QNetworkReply* reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QPixmap pm;
        pm.loadFromData(responseData);
        ui->pixmapLabel->setPixmap(pm);

        ui->temperatureLabel->setText(myWeather->temp);
        ui->humidityLabel->setText(myWeather->humidity);
        ui->descriptionLabel->setText(myWeather->description);

    } else {
        // Handle error case
        statusBar()->showMessage(tr("Error fetching weather icon."));
    }
    reply->deleteLater();
}

void MainWindow::fetchWeatherData() {
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onWeatherDataReceived);

    QString city = ui->cityLineEdit->text();

    // TODO: Check not null and empty.

    QString key = settings.value("key").toString();
    QString url = settings.value("api_url").toString();

    if (!key.isEmpty() && !url.isEmpty())
    {
        QString apiKey = settings.value("key").toString();
        QString apiUrl = settings.value("api_url").toString() + "?q=" + city + "&appid=" + apiKey + "&units=metric";

        QNetworkRequest request;
        request.setUrl(QUrl(apiUrl));

        // Send the GET request
        networkManager->get(request);
    }
    else
    {
        QMessageBox::information(this, "Warning", "Check settings!");
    }
}

void MainWindow::onWeatherDataReceived(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();

        // Parse necessary fields from the JSON data
        QJsonObject main = jsonObj.value("main").toObject();
        double temp = main.value("temp").toDouble();
        int humidity = main.value("humidity").toInt();

        QJsonObject weather = jsonObj.value("weather").toArray().at(0).toObject();
        QString weatherDescription = weather.value("description").toString();
        QString weatherIconName = weather.value("icon").toString();

        myWeather->temp = "Temp: " + QString::number(temp) + "°C";
        myWeather->humidity = "Humidity: " + QString::number(humidity) + "%";
        myWeather->description = "Condition: " + weatherDescription;

        fetchWeatherIcon(weatherIconName);

        statusBar()->showMessage(tr("Data received"), 2000);

    } else {
        // Handle error case
        statusBar()->showMessage(tr("Error fetching weather data"));
    }
    reply->deleteLater();
}

void MainWindow::on_getWeather_clicked() {

    statusBar()->showMessage(tr("Data retrieval start"));
    ui->temperatureLabel->clear();
    ui->humidityLabel->clear();
    ui->descriptionLabel->clear();
    ui->pixmapLabel->clear();
    fetchWeatherData();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionSettings_triggered()
{
    settingsForm->show();
}
