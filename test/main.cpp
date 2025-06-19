#include <QMainWindow>  // 使用QMainWindow
#include <QApplication>
#include <QChart>
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QVBoxLayout>
#include <QLabel>
#include <QPen>
#include <QColor>
#include <QRandomGenerator>
#include <QElapsedTimer>
#include <QTimer>
#include <QGraphicsScene>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setApplicationDisplayName("补天云C/C++/QT系列视频课程");

    // 创建QT统计图对象
    QChart* chart = new QChart();

    // 隐藏图例
    chart->legend()->hide();

    // 创建X轴和Y轴
    QValueAxis* axis_x = new QValueAxis();
    axis_x->setRange(0.f, 1.f);
    QValueAxis* axis_y = new QValueAxis();
    axis_y->setRange(0.f, 1.f);
    chart->addAxis(axis_x, Qt::AlignBottom);
    chart->addAxis(axis_y, Qt::AlignLeft);

    // 共10条曲线
    constexpr int SERIES_COUNT = 10;
    // 每条曲线有10份随机生成的数据，每次显示时选择一份数据
    constexpr int ROW_COUNT = 10;
    // 每条曲线有10万个数据点
    constexpr int POINT_COUNT = 10000 * 10;

    // 每条曲线的颜色
    QColor colors[] = {
        QColor(0, 0, 0),
        QColor(255, 0, 0),
        QColor(0, 255, 0),
        QColor(0, 0, 255),
        QColor(255, 255, 0),
        QColor(255, 0, 255),
        QColor(0, 255, 255),
        QColor(255, 0, 0),
        QColor(0, 255, 0),
        QColor(0, 0, 255)
    };

    // 创建这10条曲线
    QList<QLineSeries*> series_list;
    for (int i = 0; i < SERIES_COUNT; i++)
    {
        QLineSeries* series = new QLineSeries();
        // 使用OpenGL以便使用GPU硬件加速功能
        series->setUseOpenGL(true);
        series->setPen(QPen(colors[i]));
        chart->addSeries(series);
        series->attachAxis(axis_x);
        series->attachAxis(axis_y);
        series_list << series;
    }

    // 创建QT统计图视图对象，用于显示统计图
    QChartView* cv = new QChartView(chart);

    // 预生成随机化数据
    QList<QList<QList<QPointF>>> datas;
    datas.resize(SERIES_COUNT);

    // 为每一条曲线生成初始化数据
    for (int k = 0; k < SERIES_COUNT; k++)
    {
        datas[k].resize(ROW_COUNT);
        for (int i = 0; i < ROW_COUNT; i++)
        {
            for (int j = 0; j < POINT_COUNT; j++)
            {
                float x = 1.0f * j / POINT_COUNT;
                float y = 1.f * k / SERIES_COUNT +
                    0.8f / SERIES_COUNT *
                    (QRandomGenerator::global()->generate() % POINT_COUNT) / POINT_COUNT;
                datas[k][i] << QPointF(x, y);
            }
        }
    }

    // 创建主窗口（使用QMainWindow）
    QMainWindow w;

    // 创建中央部件
    QWidget* centralWidget = new QWidget();
    w.setCentralWidget(centralWidget);

    QVBoxLayout* main_layout = new QVBoxLayout(centralWidget);

    // FPS标签
    QLabel* label = new QLabel();
    main_layout->addWidget(label);
    main_layout->addWidget(cv);

    // 统计已经逝去的时间
    static QElapsedTimer* elapsed_timer = new QElapsedTimer();
    elapsed_timer->start();

    // 当前使用哪一份数据
    static int index = 0;

    // 定时器，用于控制统计图数据刷新
    QTimer* timer = new QTimer();
    timer->setSingleShot(true);
    timer->setInterval(0);
    QObject::connect(timer, &QTimer::timeout, timer, [=]{
        for (int k = 0; k < SERIES_COUNT; k++)
        {
            series_list[k]->replace(datas[k][index]);
        }
        index = (index + 1) % ROW_COUNT;

        // 统计FPS
        static int frame_count = 0;
        frame_count++;
        if (elapsed_timer->elapsed() > 1000)
        {
            int fps = frame_count * 1000.f / elapsed_timer->elapsed();
            label->setText(QString("FPS:%1").arg(fps));
            elapsed_timer->restart();
            frame_count = 0;
        }
    });

    // 用于在合适的时候启动刷新定时器
    QObject::connect(chart->scene(), &QGraphicsScene::changed,
        chart, [timer]{
            timer->start();
        });

    // 最大化显示主窗口
    w.showMaximized();

    return app.exec();
}

