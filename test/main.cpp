#include <QApplication>
#include <QThread>
#include <QtConcurrent/QtConcurrent>

void printMessage(const QString& message) {
    qDebug() << "Message from worker thread ("
             << QThread::currentThreadId() << "):" << message;
}

    
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    qDebug() << "Main thread (" << QThread::currentThreadId() << ") started";

    QFuture<void> future = QtConcurrent::run(printMessage,QString("Hello from QtConcurrent!"));
    future.waitForFinished();

    qDebug() << "Main thread finished";

    return app.exec();
}

