#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QtCore/QJsonArray>
#include <QPixmap>
#include <QStatusBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->temperatureLabel->clear();
    ui->humidityLabel->clear();
    ui->descriptionLabel->clear();
    ui->pixmapLabel->clear();
    statusBar()->showMessage(tr("Hi, dude!"), 2000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fetchWeatherIcon() {
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onWeatherIconReceived);

    QNetworkRequest request;
    request.setUrl(QUrl(weatherIconURL));

    // Send the GET request
    networkManager->get(request);
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
    QString apiKey = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    QString url = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=" + apiKey + "&units=metric";
    QNetworkRequest request;
    request.setUrl(QUrl(url));

    // Send the GET request
    networkManager->get(request);
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

        QString weatherIcon = weather.value("icon").toString();
        weatherIconURL = "https://openweathermap.org/img/wn/" + weatherIcon + "@4x.png";
        fetchWeatherIcon();

        // Update the UI with the fetched data

        myWeather->temp = "Temp: " + QString::number(temp) + "°C";
        myWeather->humidity = "Humidity: " + QString::number(humidity) + "%";
        myWeather->description = "Condition: " + weatherDescription;

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
