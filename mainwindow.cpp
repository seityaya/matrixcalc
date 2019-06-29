#include "header.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow){ui->setupUi(this);}
MainWindow::~MainWindow(){delete ui;}
void MainWindow::on_Autor_clicked()
{QMessageBox::information(this, "Об Авторе", " Терлекчи Сеитягия Амедович \n 2019 год, 3 курс \n Университет Дубна \n seityaya@ukr.net");}
void MainWindow::on_AboutQt_clicked()
{QMessageBox::aboutQt(this, "О Фреймворке");}
extern QString helpdoc;
void MainWindow::on_AHelp_clicked()
{QMessageBox::question(this, "Помощь", helpdoc) ;}
extern QString errordoc;
void MainWindow::on_AError_clicked()
{QMessageBox::question(this, "Ошибка", errordoc) ;}
