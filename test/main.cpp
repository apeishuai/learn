#include <QApplication>
#include <QtConcurrent>
#include <QMainWindow>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QRandomGenerator>

// 数据处理函数 - 生成随机数
QString generateData() {
    QThread::msleep(40); // 模拟耗时操作（0.5秒）
    int randomNum = QRandomGenerator::global()->bounded(1, 100); // 生成1-99的随机数
    return QString("Random number: %1\nThread ID: %2")
           .arg(randomNum)
           .arg(reinterpret_cast<quintptr>(QThread::currentThreadId()));
}

class MainWindow : public QMainWindow {
public:
    MainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
        label = new QLabel("Initializing...", this);
        label->setAlignment(Qt::AlignCenter);
        setCentralWidget(label);
        resize(300, 150);
        
        // 设置定时器定期生成数据
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &MainWindow::startDataGeneration);
        timer->start(25); 
    }

    void startDataGeneration() {
        QFuture<QString> future = QtConcurrent::run(generateData);
        QFutureWatcher<QString>* watcher = new QFutureWatcher<QString>(this);
        connect(watcher, &QFutureWatcher<QString>::finished, [this, watcher]() {
            label->setText(watcher->result());
            watcher->deleteLater();
        });
        watcher->setFuture(future);
    }

private:
    QLabel *label;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    MainWindow w;
    w.setWindowTitle("Random Number Generator");
    w.show();

    return app.exec();
}
