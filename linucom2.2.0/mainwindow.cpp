#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    startInit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

//初始化
void MainWindow::startInit()
{
    ui->actionSave->setEnabled(false);
    ui->actionClose->setEnabled(false);
    ui->delayspinBox->setEnabled(false);
    ui->sendmsgBtn->setEnabled(false);
    ui->sendMsgLineEdit->setEnabled(false);
    ui->obocheckBox->setEnabled(false);
    ui->actionAdd->setEnabled(true);
    ui->actionSave->setEnabled(false);
    ui->actionLoadfile->setEnabled(false);
    ui->actionCleanPort->setEnabled(false);
    ui->actionWriteToFile->setEnabled(false);

    //初始化读取定时器计时间隔
    timerdly = TIMER_INTERVAL;
    //初始化连续发送计时器计时间隔
    obotimerdly = OBO_TIMER_INTERVAL;

    //设置读取计时器
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(readMyCom()));
    //设置连续发送计时器
    obotimer = new QTimer(this);
    connect(obotimer, SIGNAL(timeout()), this, SLOT(sendMsg()));

}

//读取数据
void MainWindow::readMyCom()
{
    QByteArray temp = myCom->readAll();

    if(!temp.isEmpty()){
        //
        if(write2fileName.isEmpty()){
            if(ui->ccradioButton->isChecked()){
                ui->textBrowser->append(tr("接收: ") + temp);
            }else if(ui->chradioButton->isChecked()){
                ui->textBrowser->append(tr("接收: ") + temp.toHex());
            }else if(ui->cdradioButton->isChecked()){
                //
            }else{
                ui->textBrowser->append(tr("接收: ") + temp.toInt());
            }

        }else{
            QFile file(write2fileName);
            //如果打开失败则给出提示并退出函数
            if(!file.open(QFile::Append | QIODevice::Text)){
                QMessageBox::warning(this, tr("写入文件"), tr("打开文件 %1 失败, 无法写入\n%2").arg(write2fileName).arg(file.errorString()), QMessageBox::Ok);
                return;
            }
            QTextStream out(&file);
            out<<temp<<endl;
            file.close();
        }

        ui->recvbyteslcdNumber->display(ui->recvbyteslcdNumber->value() + temp.size());
    }
}

//连续发送数据
void MainWindow::sendMsg()
{
    myCom->write(ui->sendMsgLineEdit->text().toAscii());
    ui->textBrowser->append(tr("发送: ") + ui->sendMsgLineEdit->text());
}

//发送数据
void MainWindow::on_sendmsgBtn_clicked()
{
    //如果当前正在连续发送数据，停止发送
    if(ui->sendmsgBtn->text() == tr("停止")){
        obotimer->stop();
        ui->sendmsgBtn->setText(tr("发送"));
        return;
    }
    //如果发送数据为空，给出提示并返回
    if(ui->sendMsgLineEdit->text().isEmpty()){
        QMessageBox::information(this, tr("提示消息"), tr("没有需要发送的数据"), QMessageBox::Ok);
        return;
    }
    //发送数据
    myCom->write(ui->sendMsgLineEdit->text().toAscii());

    //界面控制
    ui->textBrowser->append(tr("发送: ") + ui->sendMsgLineEdit->text());
    //如果不是连续发送
    if(!ui->obocheckBox->isChecked()){
        ui->sendMsgLineEdit->setFocus();
    }else{ //连续发送
        obotimer->start(obotimerdly);
        ui->sendmsgBtn->setText(tr("停止"));
    }

}
//清空记录
void MainWindow::on_clearUpBtn_clicked()
{
    ui->textBrowser->clear();
}

//打开串口
void MainWindow::on_actionOpen_triggered()
{
    QString portName = "/dev/" + ui->portNameComboBox->currentText();   //获取串口名
    myCom = new Posix_QextSerialPort(portName, QextSerialBase::EventDriven);

    if(myCom->open(QIODevice::ReadWrite)){
        QMessageBox::information(this, tr("打开成功"), tr("已成功打开串口 ") + portName, QMessageBox::Ok);
    }else{
        QMessageBox::critical(this, tr("打开失败"), tr("未能打开串口 ") + portName + tr("\n该串口设备不存在或已被占用"), QMessageBox::Ok);
        return;
    }

    //设置波特率
    myCom->setBaudRate((BaudRateType)ui->baudRateComboBox->currentIndex());

    //设置数据位
    myCom->setDataBits((DataBitsType)ui->dataBitsComboBox->currentIndex());

    //设置校验
    myCom->setParity((ParityType)ui->parityComboBox->currentIndex());

    //设置停止位
    myCom->setStopBits((StopBitsType)ui->stopBitsComboBox->currentIndex());

    //界面控制
    ui->sendmsgBtn->setEnabled(true);
    ui->portNameComboBox->setEnabled(false);
    ui->baudRateComboBox->setEnabled(false);
    ui->dataBitsComboBox->setEnabled(false);
    ui->parityComboBox->setEnabled(false);
    ui->stopBitsComboBox->setEnabled(false);
    ui->sendMsgLineEdit->setEnabled(true);
    ui->actionClose->setEnabled(true);
    ui->actionOpen->setEnabled(false);
    ui->sendMsgLineEdit->setFocus();
    ui->obocheckBox->setEnabled(true);
    ui->actionAdd->setEnabled(false);
    ui->actionSave->setEnabled(true);
    ui->actionLoadfile->setEnabled(true);
    ui->actionCleanPort->setEnabled(true);
    ui->actionWriteToFile->setEnabled(true);

    //开启读取定时器
    timer->start(timerdly);
    //设置数据流控制
    myCom->setFlowControl(FLOW_OFF);
    //设置延时
    myCom->setTimeout(TIME_OUT);

}

//关闭串口
void MainWindow::on_actionClose_triggered()
{

    myCom->close();
    timer->stop();

    ui->sendmsgBtn->setEnabled(false);
    ui->portNameComboBox->setEnabled(true);
    ui->baudRateComboBox->setEnabled(true);
    ui->dataBitsComboBox->setEnabled(true);
    ui->parityComboBox->setEnabled(true);
    ui->stopBitsComboBox->setEnabled(true);
    ui->actionOpen->setEnabled(true);
    ui->sendMsgLineEdit->setEnabled(false);
    ui->obocheckBox->setEnabled(false);
    ui->actionAdd->setEnabled(true);
    ui->actionSave->setEnabled(false);
    ui->actionClose->setEnabled(false);
    ui->actionLoadfile->setEnabled(false);
    ui->actionCleanPort->setEnabled(false);
    ui->actionWriteToFile->setChecked(false);
    ui->actionWriteToFile->setEnabled(false);


}

//关于
void MainWindow::on_actionAbout_triggered()
{
    aboutdlg.show();
    /*
    QMessageBox box;
    box.setWindowTitle(tr("关于"));
    box.setStandardButtons(QMessageBox::Ok);
    box.setText(tr("版本: 2.0\n作者: 何庆玮\n联系: hqwemail@163.com\n获取更多信息, 或在linucom中推广您的产品."));
    box.setIcon(QMessageBox::Information);
    box.exec();
    */
}

//计数器清零
void MainWindow::on_actionClearBytes_triggered()
{
    if(ui->recvbyteslcdNumber->value() == 0){
        QMessageBox::information(this, tr("提示消息"), tr("貌似已经清零了呀:)"), QMessageBox::Ok);
    }else{
        ui->recvbyteslcdNumber->display(0);
    }
}

//单击连续发送checkBox
void MainWindow::on_obocheckBox_clicked()
{
    if(ui->obocheckBox->isChecked()){
        ui->delayspinBox->setEnabled(true);
        //检查是否有数据，如有则启动定时器
    }else{
        ui->delayspinBox->setEnabled(false);
        //若定时器已经启动则关闭它
    }
}

//保存textBrowser中的内容
void MainWindow::on_actionSave_triggered()
{

    if(ui->textBrowser->toPlainText().isEmpty()){
        QMessageBox::information(this, "提示消息", tr("貌似还没有数据! 您需要在发送编辑框中输入要发送的数据"), QMessageBox::Ok);
        return;
    }

    QString filename = QFileDialog::getSaveFileName(this, tr("保存为"), tr("未命名.txt"));
    QFile file(filename);
    //如果用户取消了保存则直接退出函数
    if(file.fileName().isEmpty()){
        return;
    }
    //如果打开失败则给出提示并退出函数
    if(!file.open(QFile::WriteOnly | QIODevice::Text)){
        QMessageBox::warning(this, tr("保存文件"), tr("打开文件 %1 失败, 无法保存\n%2").arg(filename).arg(file.errorString()), QMessageBox::Ok);
        return;
    }
    //写数据到文件
    QTextStream out(&file);
    out<<ui->textBrowser->toPlainText();
    file.close();
    //修改窗口标题为保存文件路径
    setWindowTitle("saved: " + QFileInfo(filename).canonicalFilePath());


}

//退出程序
void MainWindow::on_actionExit_triggered()
{
    if(myCom->isOpen()){
        myCom->close();
    }
    this->close();
}

//添加串口
void MainWindow::on_actionAdd_triggered()
{
    bool ok = false;
    QString portname;

    portname = QInputDialog::getText(this, tr("添加串口"), tr("设备文件名"), QLineEdit::Normal, 0, &ok);
    if(ok && !portname.isEmpty()){
        ui->portNameComboBox->addItem(portname);
    }

}

//调整连续发送时间间隔
void MainWindow::on_delayspinBox_valueChanged(int )
{
    obotimerdly = ui->delayspinBox->value();
}

//设置读取串口数据间隔时间
void MainWindow::on_actionReadPortInterval_triggered()
{
    bool ok = false;
    unsigned int interval;

    interval = QInputDialog::getInteger(this, tr("读取间隔"), tr("设置读取串口数据间隔时间(毫秒)"), 200, 10, 5000, 1, &ok);
    if(ok){
        timerdly = interval;
        if(timer->isActive()){
            timer->start(timerdly);
        }
    }
}

//载入外部文件
void MainWindow::on_actionLoadfile_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("读取文件"), 0, tr("保存为 (*.txt *.log)"));  //添加更多的文件类型
    QFile file(filename);

    //如果取消打开则退出函数
    if(file.fileName().isEmpty()){
        return;
    }

    //如果打开失败则提示并退出函数
    if(!file.open(QFile::ReadOnly | QIODevice::Text)){
        QMessageBox::warning(this, tr("打开失败"),
                             tr("抱歉! linucom未能打开此文件, 这可能是由于没有足够的权限造成的. 您可以尝试使用chmod命令修改文件权限."),
                             QMessageBox::Ok);
        return;
    }

    //文件大小超过限制
    if(file.size() > MAX_FILE_SIZE){
        QMessageBox::critical(this, tr("载入失败"), tr("文件大小为 %1 字节, 超过限制大小 10000 字节").arg(file.size()), QMessageBox::Ok);
        return;
    }
    //文件太大时提示是否继续打开
    if(file.size() > TIP_FILE_SIZE){
        if(QMessageBox::question(this, tr("提示消息"), tr("您要打开的文件过大, 这将消耗更多一些的时间,要继续打开么?"),
                                 QMessageBox::Yes | QMessageBox::No) == QMessageBox::No){

            return;
        }
    }

    //读取数据并加入到发送数据编辑框
    QByteArray line;
    while(!file.atEnd()){
        line = file.readLine();
        ui->sendMsgLineEdit->setText(ui->sendMsgLineEdit->text() + tr(line));

    }
    file.close();

}

//清空串口中的I/O数据
void MainWindow::on_actionCleanPort_triggered()
{
    myCom->flush();
}

//写入文件菜单
void MainWindow::on_actionWriteToFile_triggered()
{
    if(ui->actionWriteToFile->isChecked()){
        QString filename = QFileDialog::getSaveFileName(this, tr("写入文件"), 0, tr("保存为 (*.*)"));  //添加更多的文件类型
        if(filename.isEmpty()){
            ui->actionWriteToFile->setChecked(false);
        }else{
            write2fileName = filename;
        }
    }else{
        write2fileName.clear();
    }

}
