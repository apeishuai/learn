#ifndef FBOITEM_H
#define FBOITEM_H

#include <QQuickFramebufferObject>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>

class FboItemRenderer : public QQuickFramebufferObject::Renderer, protected QOpenGLFunctions {
public:
    FboItemRenderer() {
        initializeOpenGLFunctions();
        // 初始化着色器
        program.addShaderFromSourceCode(QOpenGLShader::Vertex,
            "attribute vec2 position;"
            "void main() { gl_Position = vec4(position, 0.0, 1.0); }");
        program.addShaderFromSourceCode(QOpenGLShader::Fragment,
            "void main() { gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0); }"); // 红色
        program.link();
    }

protected:
    void render() override {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        program.bind();
        static const float vertices[] = {
            -0.5f, -0.5f,  0.5f, -0.5f,  0.0f,  0.5f
        };
        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, vertices);
        glEnableVertexAttribArray(0);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        glDisableVertexAttribArray(0);
        program.release();
    }

private:
    QOpenGLShaderProgram program;
};

class FboItem : public QQuickFramebufferObject {
    Q_OBJECT
public:
    Renderer* createRenderer() const override {
        return new FboItemRenderer();
    }
};

#endif // FBOITEM_H
