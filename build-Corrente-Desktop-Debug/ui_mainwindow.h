/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *ButtonOnOff_1;
    QLabel *ImagemMotor1;
    QLabel *ImagemMotor2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Led_2;
    QLabel *Led_1;
    QTableWidget *Tabela;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *sensor;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *labelCorrente2;
    QLabel *label_5;
    QLabel *menor;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QComboBox *comboBox_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *CONECTAR;
    QLabel *status;
    QLabel *recebendo_dados;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLineEdit *Corrente1;
    QGroupBox *groupBox_2;
    QLineEdit *Corrente2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(445, 691);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 391, 641));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 331, 31));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 221, 29));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(204, 204, 204);"));
        label->setScaledContents(false);
        ButtonOnOff_1 = new QPushButton(tab);
        ButtonOnOff_1->setObjectName(QString::fromUtf8("ButtonOnOff_1"));
        ButtonOnOff_1->setGeometry(QRect(20, 250, 241, 23));
        ImagemMotor1 = new QLabel(tab);
        ImagemMotor1->setObjectName(QString::fromUtf8("ImagemMotor1"));
        ImagemMotor1->setGeometry(QRect(10, 200, 61, 41));
        ImagemMotor1->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/electric-motor.png")));
        ImagemMotor1->setScaledContents(true);
        ImagemMotor2 = new QLabel(tab);
        ImagemMotor2->setObjectName(QString::fromUtf8("ImagemMotor2"));
        ImagemMotor2->setGeometry(QRect(150, 200, 61, 41));
        ImagemMotor2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/electric-motor.png")));
        ImagemMotor2->setScaledContents(true);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 280, 101, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 280, 101, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 60, 51, 241));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/street-lamp.png")));
        label_9->setScaledContents(true);
        Led_2 = new QLabel(tab);
        Led_2->setObjectName(QString::fromUtf8("Led_2"));
        Led_2->setGeometry(QRect(220, 200, 41, 41));
        Led_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/led-light.png")));
        Led_2->setScaledContents(true);
        Led_1 = new QLabel(tab);
        Led_1->setObjectName(QString::fromUtf8("Led_1"));
        Led_1->setGeometry(QRect(80, 200, 41, 41));
        Led_1->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/led-light.png")));
        Led_1->setScaledContents(true);
        Tabela = new QTableWidget(tab);
        if (Tabela->columnCount() < 2)
            Tabela->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Tabela->setObjectName(QString::fromUtf8("Tabela"));
        Tabela->setGeometry(QRect(15, 310, 331, 141));
        Tabela->setWordWrap(true);
        Tabela->horizontalHeader()->setVisible(false);
        Tabela->horizontalHeader()->setCascadingSectionResizes(false);
        Tabela->horizontalHeader()->setHighlightSections(true);
        Tabela->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Tabela->horizontalHeader()->setStretchLastSection(true);
        Tabela->verticalHeader()->setVisible(false);
        Tabela->verticalHeader()->setHighlightSections(true);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 110, 291, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label_3);


        horizontalLayout_3->addLayout(horizontalLayout);

        sensor = new QLabel(layoutWidget);
        sensor->setObjectName(QString::fromUtf8("sensor"));

        horizontalLayout_3->addWidget(sensor);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 170, 221, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_4);

        labelCorrente2 = new QLineEdit(layoutWidget1);
        labelCorrente2->setObjectName(QString::fromUtf8("labelCorrente2"));

        horizontalLayout_2->addWidget(labelCorrente2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_5);

        menor = new QLabel(tab);
        menor->setObjectName(QString::fromUtf8("menor"));
        menor->setGeometry(QRect(120, 460, 47, 13));
        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 470, 241, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(label_6);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 500, 241, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(label_10);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        layoutWidget4 = new QWidget(tab);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 530, 231, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        CONECTAR = new QPushButton(layoutWidget4);
        CONECTAR->setObjectName(QString::fromUtf8("CONECTAR"));

        horizontalLayout_7->addWidget(CONECTAR);

        status = new QLabel(layoutWidget4);
        status->setObjectName(QString::fromUtf8("status"));

        horizontalLayout_7->addWidget(status);

        recebendo_dados = new QLabel(tab);
        recebendo_dados->setObjectName(QString::fromUtf8("recebendo_dados"));
        recebendo_dados->setGeometry(QRect(110, 570, 201, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 291, 151));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        Corrente1 = new QLineEdit(groupBox);
        Corrente1->setObjectName(QString::fromUtf8("Corrente1"));
        Corrente1->setGeometry(QRect(100, 70, 81, 41));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 230, 281, 161));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        Corrente2 = new QLineEdit(groupBox_2);
        Corrente2->setObjectName(QString::fromUtf8("Corrente2"));
        Corrente2->setGeometry(QRect(100, 70, 81, 41));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 445, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSalvar);
        menuFile->addAction(actionCarregar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCarregar->setText(QCoreApplication::translate("MainWindow", "Carregar", nullptr));
#if QT_CONFIG(shortcut)
        actionCarregar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">CONTROLADOR DE CORRENTE</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "           Dados recebidos", nullptr));
        ButtonOnOff_1->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        ImagemMotor1->setText(QString());
        ImagemMotor2->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Equipamento 1", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Equipamento 2", nullptr));
        label_9->setText(QString());
        Led_2->setText(QString());
        Led_1->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = Tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Sensor 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Sensor 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sensor 1", nullptr));
        sensor->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sensor 2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        menor->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Porta", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "velocidade", nullptr));
        CONECTAR->setText(QCoreApplication::translate("MainWindow", "CONECTAR", nullptr));
        status->setText(QString());
        recebendo_dados->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Dados", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sensor 1", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Sensor 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Estat\303\255sticas", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
