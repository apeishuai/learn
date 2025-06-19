// painteditem.cpp
#include "painteditem.h"

PaintedItem::PaintedItem(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
    setFlag(ItemHasContents, true); // 启用绘制
}

void PaintedItem::paint(QPainter *painter)
{
    // 启用抗锯齿
    painter->setRenderHint(QPainter::Antialiasing);
    
    // 设置画笔和画刷
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setBrush(QBrush(m_color.lighter()));
    
    // 绘制矩形
    QRectF rect = boundingRect().adjusted(5, 5, -5, -5);
    painter->drawRoundedRect(rect, 10, 10);
    
    // 绘制文本
    painter->drawText(rect, Qt::AlignCenter, "QQuickPaintedItem");
}

QColor PaintedItem::color() const
{
    return m_color;
}

void PaintedItem::setColor(const QColor &newColor)
{
    if (m_color == newColor)
        return;
    m_color = newColor;
    update(); // 触发重绘
    emit colorChanged();
}
