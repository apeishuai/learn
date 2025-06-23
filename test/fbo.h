#pragma once
#include <QQuickFramebufferObject>
#include <QOpenGLFunctions>
#include <QOpenGLFramebufferObject>
#include <QDebug>

class FboRenderer : public QQuickFramebufferObject::Renderer, protected QOpenGLFunctions {
public:
    //void synchronize(QQuickFramebufferObject *item) override {
        //qDebug() << "[Renderer] Synchronize called";
    //}

    void render() override {
        if (!m_initialized) {
            initializeOpenGLFunctions();
            m_initialized = true;
        }

        if (!framebufferObject()) {
            return;
        }

        glViewport(0, 0, framebufferObject()->width(), framebufferObject()->height());
        
        glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }

    QOpenGLFramebufferObject *createFramebufferObject(const QSize &size) override {
        QOpenGLFramebufferObjectFormat format;
        format.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
        return new QOpenGLFramebufferObject(size, format);
    }

private:
    bool m_initialized = false;
};

class FboItem : public QQuickFramebufferObject {
    Q_OBJECT
    QML_ELEMENT
public:
    Renderer *createRenderer() const override {
        return new FboRenderer();
    }
};
