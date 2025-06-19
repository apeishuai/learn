// painteditem.h
#ifndef PAINTEDITEM_H
#define PAINTEDITEM_H

#include <QQuickPaintedItem>
#include <QPainter>

class PaintedItem : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    
public:
    explicit PaintedItem(QQuickItem *parent = nullptr);
    
    void paint(QPainter *painter) override;
    
    QColor color() const;
    void setColor(const QColor &newColor);
    
signals:
    void colorChanged();
    
private:
    QColor m_color = Qt::blue;
};

#endif // PAINTEDITEM_H
