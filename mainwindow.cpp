#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText("");
    int q = ui->lineEdit->text().toInt();
    int l = ui->lineEdit_2->text().toInt();
    passgen p(q, l);
    p.init();
    ui->textEdit->setFontFamily("DejaVu Sans Mono");
    for (int i = 0; i < q; i++) {
        ui->textEdit->append(p.getPassFromList(i));
    }
}
