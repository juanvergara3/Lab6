#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>

#include "body.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public: // Variables

private: // Variables
    Ui::MainWindow *ui;

    QGraphicsScene *scene;

    QTimer *timer;

    QList <Body *> bodies;

    double T;

public: // Methods
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void remove_empty_bodies();

private: // Methods

private slots: //slots
    void simulation();

    void on_start_button_clicked();
    void on_pause_button_clicked();
    void on_resume_button_clicked();
};
#endif // MAINWINDOW_H
