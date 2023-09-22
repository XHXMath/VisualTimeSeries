#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QWidget>
#include <QMessageBox>
#include <random>
#include <cmath>
#include <float.h>

float MainWindow::X[150] = {0};
float MainWindow::X_max = 0;
float MainWindow::X_min = 0;
int MainWindow::N = 150;
int MainWindow::d = 0;
int MainWindow::D = 0;
int MainWindow::s = 12;
float MainWindow::eta[150] = {0};
float MainWindow::alpha_0 = 1;
bool MainWindow::lock_a = false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/images/Logo.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_stateChanged(int checkState)
{
      if (checkState == Qt::Unchecked) {
          d = 0;
          ui->radioButton_4->setChecked(true);
          ui->radioButton_5->setChecked(false);
          ui->radioButton_4->setEnabled(false);
          ui->radioButton_5->setEnabled(false);
          ui->label_8->setEnabled(false);
      }
      if (checkState == Qt::Checked) {
          d = 1;
          ui->radioButton_4->setEnabled(true);
          ui->radioButton_5->setEnabled(true);
          ui->label_8->setEnabled(true);
      }
}

void MainWindow::on_checkBox_2_stateChanged(int checkState)
{
    if (checkState == Qt::Unchecked) {
        D = 0;
        ui->radioButton_8->setChecked(true);
        ui->radioButton_9->setChecked(false);
        ui->lineEdit_8->setText("0");
        ui->lineEdit_10->setText("0");
        ui->radioButton_6->setEnabled(false);
        ui->radioButton_7->setEnabled(false);
        ui->radioButton_8->setEnabled(false);
        ui->radioButton_9->setEnabled(false);
        ui->lineEdit_8->setEnabled(false);
        ui->lineEdit_10->setEnabled(false);
        ui->label_9->setEnabled(false);
        ui->label_10->setEnabled(false);
        ui->label_11->setEnabled(false);
        ui->label_17->setEnabled(false);
    }
    if (checkState == Qt::Checked) {
        ui->radioButton_6->setEnabled(true);
        ui->radioButton_7->setEnabled(true);
        ui->radioButton_8->setEnabled(true);
        ui->radioButton_9->setEnabled(true);
        ui->lineEdit_8->setEnabled(true);
        ui->lineEdit_10->setEnabled(true);
        ui->label_9->setEnabled(true);
        ui->label_10->setEnabled(true);
        ui->label_11->setEnabled(true);
        ui->label_17->setEnabled(true);
    }
}

void MainWindow::on_checkBox_3_stateChanged(int checkState)
{
    if (checkState == Qt::Unchecked) {
        ui->lineEdit_11->setText("1");
        ui->lineEdit_12->setText("0");
        ui->lineEdit_13->setText("0");
        ui->lineEdit_14->setText("0");
        ui->lineEdit_15->setText("0");
        ui->lineEdit_11->setEnabled(false);
        ui->lineEdit_12->setEnabled(false);
        ui->lineEdit_13->setEnabled(false);
        ui->label_12->setEnabled(false);
        ui->label_13->setEnabled(false);
        ui->label_14->setEnabled(false);
        ui->checkBox_5->setEnabled(false);
        ui->checkBox_5->setChecked(false);
        ui->lineEdit_14->setEnabled(false);
        ui->lineEdit_15->setEnabled(false);
        ui->label_15->setEnabled(false);
        ui->label_16->setEnabled(false);
    }
    if (checkState == Qt::Checked) {
        ui->lineEdit_11->setEnabled(true);
        ui->lineEdit_12->setEnabled(true);
        ui->lineEdit_13->setEnabled(true);
        ui->label_12->setEnabled(true);
        ui->label_13->setEnabled(true);
        ui->label_14->setEnabled(true);
        ui->checkBox_5->setEnabled(true);
    }
}

void MainWindow::on_checkBox_5_stateChanged(int checkState)
{
    if (checkState == Qt::Unchecked) {
        ui->lineEdit_14->setEnabled(false);
        ui->lineEdit_15->setEnabled(false);
        ui->label_15->setEnabled(false);
        ui->label_16->setEnabled(false);
    }
    if (checkState == Qt::Checked) {
        ui->lineEdit_14->setEnabled(true);
        ui->lineEdit_15->setEnabled(true);
        ui->label_15->setEnabled(true);
        ui->label_16->setEnabled(true);
    }
}

void MainWindow::on_checkBox_4_stateChanged(int checkState)
{
    if (checkState == Qt::Unchecked) lock_a = false;
    if (checkState == Qt::Checked) lock_a = true;
}
//RadioButton需要先将AutoExclusive设为false，然后才能自定义分组
//RadioButton被点击时需要为自己的checked设为true，否则点击两次时会被设为false
void MainWindow::on_radioButton_clicked(){ N = 30;ui->radioButton->setChecked(true);
    ui->radioButton_2->setChecked(false); ui->radioButton_3->setChecked(false);}
void MainWindow::on_radioButton_2_clicked(){ N = 75;ui->radioButton_2->setChecked(true);
    ui->radioButton->setChecked(false); ui->radioButton_3->setChecked(false);}
void MainWindow::on_radioButton_3_clicked(){ N = 150;ui->radioButton_3->setChecked(true);
    ui->radioButton->setChecked(false); ui->radioButton_2->setChecked(false);}
void MainWindow::on_radioButton_4_clicked(){
    d = 1;ui->radioButton_4->setChecked(true); ui->radioButton_5->setChecked(false);}
void MainWindow::on_radioButton_5_clicked(){
    d = 2;ui->radioButton_5->setChecked(true); ui->radioButton_4->setChecked(false);}
void MainWindow::on_radioButton_6_clicked(){
    s = 4;ui->radioButton_6->setChecked(true); ui->radioButton_7->setChecked(false);}
void MainWindow::on_radioButton_7_clicked(){
    s = 12;ui->radioButton_7->setChecked(true); ui->radioButton_6->setChecked(false);}
void MainWindow::on_radioButton_8_clicked(){
    D = 0;ui->radioButton_8->setChecked(true); ui->radioButton_9->setChecked(false);}
void MainWindow::on_radioButton_9_clicked(){
    D = 1;ui->radioButton_9->setChecked(true); ui->radioButton_8->setChecked(false);}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Made by Shandong University\n"
                                            "School of Mathematics\n"
                                            "Data Science 2019 Student XHX");
}

void MainWindow::on_pushButton_clicked()
{
    float phi_1 = ui->lineEdit->text().toFloat();
    float phi_2 = ui->lineEdit_2->text().toFloat();
    float phi_3 = ui->lineEdit_3->text().toFloat();
    float theta_1 = ui->lineEdit_4->text().toFloat();
    float theta_2 = ui->lineEdit_5->text().toFloat();
    float theta_3 = ui->lineEdit_6->text().toFloat();
    float PHI_1 = ui->lineEdit_8->text().toFloat();
    float THETA_1 = ui->lineEdit_10->text().toFloat();
    alpha_0 = ui->lineEdit_11->text().toFloat();//alpha_0初始值要设为1，否则X_t将恒等于0
    float alpha_1 = ui->lineEdit_12->text().toFloat();
    float alpha_2 = ui->lineEdit_13->text().toFloat();
    float beta_0 = ui->lineEdit_14->text().toFloat();
    float beta_1 = ui->lineEdit_15->text().toFloat();
    if(lock_a == false){
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);
        std::normal_distribution<float> randn(0,1);
        for(int i = 0;i < N;i++) eta[i] = randn(generator);
    }
    //ARCH序列的计算
    float a[150] = {0};
    float h[150] = {0};
    h[0] = sqrt(alpha_0);
    a[0] = h[0]*eta[0];
    h[1] = sqrt(alpha_0 + alpha_1*pow(a[0],2) + beta_0*pow(h[0],2));
    a[1] = h[1]*eta[1];
    for(int i = 0;i < N-2;i++){
        h[i+2] = sqrt(alpha_0 + alpha_1*pow(a[i+1],2) + alpha_2*pow(a[i],2)
                + beta_0*pow(h[i+1],2) + beta_1*pow(h[i],2));
        a[i+2] = h[i+2]*eta[i+2];
    }
    //ARMA序列的计算
    if(N > 3) {
        X[0] = a[0];
        X[1] = a[1] + phi_1 * X[0] - theta_1 * a[0];
        X[2] = a[2] + phi_1 * X[1] - theta_1 * a[1] + phi_2 * X[0]- theta_2 * a[0];
    }
    for(int i = 0;i < N-3;i++)
        X[i+3] = a[i+3] + phi_1 * X[i+2] - theta_1 * a[i+2] + phi_2 * X[i+1]
                - theta_2 * a[i+1] + phi_3 * X[i]- theta_3 * a[i];
    //ARIMA序列的计算
    for(int i = 0;i < d;i++){
        for(int j = 0;j < N-1;j++){
            X[j+1] += X[j];
        }
    }
    //SARIMA序列的计算
    //计算移动平均部分，注意要逆向赋值，防止污染数据
    for(int i = N-1;i > s-1 ;i--){ X[i] -= THETA_1 * X[i-s];}
    //计算自回归部分，注意要正向赋值
    for(int i = 0;i < N-1;i++){ X[i] += PHI_1 * X[i];}
    //计算滑动部分
    for(int i = 0;i < D;i++){
        for(int j = 0;j < N-s;j++){
            X[j+s] += X[j];
        }
    }
    update();//重画屏幕
}

void MainWindow::paintEvent(QPaintEvent* pe)
{
    Q_UNUSED(pe);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(QColor(160, 128, 255));
    X_max = FLT_MIN; X_min = FLT_MAX;
    for(int i = 0;i < N-1;i++){
        if(X[i]>X_max) X_max = X[i];
        if(X[i]<X_min) X_min = X[i];
    }
    if(X_min>-5 && X_max<5){
        for(int i = 0;i < N-1;i++)
            painter.drawLine(450 + 450.0/N*i,225 - 35*X[i],450 + 450.0/N*(i+1),225 - 35*X[i+1]);
        //除法需要分子分母中有一个为float或double才能进行浮点数除法，否则会直接取整
        ui->label_20->setVisible(true);
        ui->label_20->setGeometry(440,190,16,30);
        ui->label_21->setText("5");
        ui->label_22->setText("-5");
        painter.setPen(QColor(128, 128, 128));
        painter.drawLine(450,225,900,225);
    }
    else{
        float Y[150] = {0};
        float X_range = X_max - X_min;//{X_t}的极差
        const QString strX_max = QString::number(X_max, 'f', 2);
        const QString strX_min = QString::number(X_min, 'f', 2);
        ui->label_21->setText(strX_max);
        ui->label_22->setText(strX_min);
        for(int i = 0;i < N;i++) Y[i] = (X[i]-X_min) / X_range * 350;
        for(int i = 0;i < N-1;i++)
            painter.drawLine(450 + 450.0/N*i,400 - Y[i],450 + 450.0/N*(i+1),400 - Y[i+1]);
        if(X_min<=0 && X_max>=0){//0值在视图范围内
            painter.setPen(QColor(128, 128, 128));
            float ZeroLine = (0.0-X_min) / X_range * 350;
            painter.drawLine(450,400 - ZeroLine,900,400 - ZeroLine);
            ui->label_20->setVisible(true);
            ui->label_20->setGeometry(440,400 - ZeroLine-35,16,30);
        }
        else{ui->label_20->setVisible(false);}
    }
    painter.setPen(QColor(192, 192, 192));
    painter.drawRect(450,50,450,350);
}
