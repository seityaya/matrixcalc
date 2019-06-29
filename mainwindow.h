#pragma once
#include "header.h"

namespace Ui {class MainWindow;}
class MainWindow:public QMainWindow
{Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_Autor_clicked();
    void on_AboutQt_clicked();
    void on_AHelp_clicked();
    void on_AError_clicked();

private:
    Ui::MainWindow *ui;};
