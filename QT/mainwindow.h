#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dados.h"
#include "objeto.h"

#include <QDialog>
#include <QDebug>
#include <QFileDialog>
#include<QString>
#include<QVector>
#include<QMessageBox>
#include <algorithm>
#include <QFile>
#include <QStringList>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QSerialPort serial;



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonOnOff_1_clicked();

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

    void on_Tabela_cellDoubleClicked(int row, int column);

    void on_CONECTAR_clicked();

    void dadosRecebidos();
private:
    Ui::MainWindow *ui;

    Objeto equipamento;

    void atualizarEstatisticas();
    void inserirNaTabela(Dados a, int linha);

    Dados corrente;
};
#endif // MAINWINDOW_H
