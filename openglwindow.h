
#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include "game.h"

#include <QWindow>
#include <QOpenGLFunctions>
#include <QKeyEvent>
#include <QDebug>
#include <QMatrix4x4>

QT_BEGIN_NAMESPACE
class QPainter;
class QOpenGLContext;
class QOpenGLPaintDevice;
QT_END_NAMESPACE

class OpenGLWindow : public QWindow, protected QOpenGLFunctions
{
    Q_OBJECT
    public:
        explicit OpenGLWindow(QWindow *parent = nullptr);
        ~OpenGLWindow();

        virtual void render(QPainter *painter);
        virtual void render();
        virtual void initialize();

        void setAnimating(bool animating);
        game* p_game;
//        void sendKey();

    public slots:
        void renderLater();
        void renderNow();
        void keyPressEvent(QKeyEvent *event) override;

    signals:
        void key(QKeyEvent *event);

    protected:
        bool event(QEvent *event) override;
        void exposeEvent(QExposeEvent *event) override;

    private:
        bool m_animating = false;

        QOpenGLContext *m_context = nullptr;
        QOpenGLPaintDevice *m_device = nullptr;


};

#endif // OPENGLWINDOW_H
