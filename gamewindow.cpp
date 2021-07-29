#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    // setting up the application
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);

    // for sizing and ensuring chessboard stays a square
    screenWidth = QApplication::screens().at(0)->availableGeometry().x();
    screenHeight = QApplication::screens().at(0)->availableGeometry().y();

    scene = new Scene(this);
    scene->createEnv();
    ui->boardGraphicsView->setScene(scene);

}

GameWindow::~GameWindow()
{
    delete ui;
}

