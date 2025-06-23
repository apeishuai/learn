#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#include <QSemaphore>
#include <QVector>

template <typename T>
class RingBuffer {
public:
    RingBuffer(int size) :
        m_size(size),
        m_buffer(size),
        m_freeSlots(size),
        m_usedSlots(0)
    {
    }

    void push(const T& item) {
        m_freeSlots.acquire();  // 等待有空闲位置
        m_buffer[m_writePos] = item;
        m_writePos = (m_writePos + 1) % m_size;
        m_usedSlots.release();  // 增加已使用计数
    }

    T pop() {
        m_usedSlots.acquire();  // 等待有数据可用
        T item = m_buffer[m_readPos];
        m_readPos = (m_readPos + 1) % m_size;
        m_freeSlots.release();  // 增加空闲位置计数
        return item;
    }

    bool tryPush(const T& item, int timeout = 0) {
        if (m_freeSlots.tryAcquire(1, timeout)) {
            m_buffer[m_writePos] = item;
            m_writePos = (m_writePos + 1) % m_size;
            m_usedSlots.release();
            return true;
        }
        return false;
    }

    bool tryPop(T& item, int timeout = 0) {
        if (m_usedSlots.tryAcquire(1, timeout)) {
            item = m_buffer[m_readPos];
            m_readPos = (m_readPos + 1) % m_size;
            m_freeSlots.release();
            return true;
        }
        return false;
    }

    int available() const {
        return m_usedSlots.available();
    }

    int freeSlots() const {
        return m_freeSlots.available();
    }

private:
    const int m_size;
    QVector<T> m_buffer;
    int m_readPos = 0;
    int m_writePos = 0;
    QSemaphore m_freeSlots;
    QSemaphore m_usedSlots;
};

#endif // RINGBUFFER_H
