#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void receiveMessage();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void realtimeDataSlot();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_verticalSlider_valueChanged(int value);


private:
    Ui::MainWindow *ui;
    QSerialPort serialPort;
    QSerialPortInfo info;
    QString buffer;
    QString code;
    //char outputs;
    int codeSize;
    double temp;
    char setpoint;
    QStringList dataRx;
    quint8 duty;
    QTimer dataTimer;
    int i;
};
#endif // MAINWINDOW_H
