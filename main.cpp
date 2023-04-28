
#include "openglwindow.h"

#include <QGuiApplication>
#include <QMatrix4x4>
#include <QOpenGLShaderProgram>
#include <QScreen>
#include <QtMath>

//static const char *vertexShaderSource =
//    "attribute highp vec4 posAttr;\n"
//    "attribute lowp vec4 colAttr;\n"
//    "varying lowp vec4 col;\n"
//    "uniform highp mat4 matrix;\n"
//    "void main() {\n"
//    "   col = colAttr;\n"
//    "   gl_Position = matrix * posAttr;\n"
//    "}\n";

//static const char *fragmentShaderSource =
//    "varying lowp vec4 col;\n"
//    "void main() {\n"
//    "   gl_FragColor = col;\n"
//    "}\n";

const char *vertexShaderSource = "#version 330 core\n"
     "layout (location = 0) in vec3 aPos;\n"
     "uniform highp mat4 matrix;\n"
     "void main()\n"
     "{\n"
     "   gl_Position = matrix * vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
     "}\0";

const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n" ;

class TriangleWindow : public OpenGLWindow
{

    public:
        using OpenGLWindow::OpenGLWindow;

        void initialize() override;
        void render() override;
        int getPacsDir();
        QMatrix4x4 matrix;
//        int getPacsX();
//        int getPacsY();

//      void keyPressEvent(QKeyEvent *event) override;
//      QMatrix4x4& getMatrix (QMatrix4x4&);
    public slots:
//      void changeddir(PacMan::direction);
    private:
        GLint m_matrixUniform = 0;
        GLint m_aPos = 0;
        QOpenGLShaderProgram *m_program = nullptr;
        int m_frame = 0;
        QMatrix4x4& getDirAsMatrix(QMatrix4x4&);
//      PacMan::direction dir;
//      GLint m_posAttr = 0;
//      GLint m_colAttr = 0;

};

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    TriangleWindow window;

    window.setFormat(format);
    window.resize(640, 480);
    window.show();

    window.setAnimating(true);

    return app.exec();
}

//TriangleWindow::TriangleWindow(){
//    QObject::connect(p_game->p_pacman, &PacMan::changedir, this, &TriangleWindow::changedir);
//}

void TriangleWindow::initialize()
{
    m_program = new QOpenGLShaderProgram(this);
    m_program->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
    m_program->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
    m_program->link();
//    m_posAttr = m_program->attributeLocation("posAttr");
//    Q_ASSERT(m_posAttr != -1);
//    m_colAttr = m_program->attributeLocation("colAttr");
//    Q_ASSERT(m_colAttr != -1);
//    m_matrixUniform = m_program->uniformLocation("matrix");
//    Q_ASSERT(m_matrixUniform != -1);
    m_aPos = m_program->attributeLocation("aPos");
    Q_ASSERT(m_aPos != -1);
//    QObject::connect(p_game->p_pacman, &PacMan::changedir, this, &TriangleWindow::changeddir);
//    matrix->translate(.1*m_frame/screen()->refreshRate(), 0, 0);
}

void TriangleWindow::render()
{
//    const qreal retinaScale = devicePixelRatio();
//    glViewport(0, 0, width() * retinaScale, height() * retinaScale);

//    glClear(GL_COLOR_BUFFER_BIT);

//    m_program->bind();

////    matrix.ortho(0,0,1,1,0,0);
//    getDirAsMatrix(matrix);
////    matrix.perspective(60.0f, 4.0f / 3.0f, 0.1f, 100.0f);
////    matrix.translate(.1*m_frame/screen()->refreshRate(), 0, 0);
////    matrix.rotate(100.0f * m_frame / screen()->refreshRate(), 0, 1, 0);
//    m_program->setUniformValue(m_matrixUniform, matrix);

////    static const GLfloat vertices[] = {
////        0.0f,  0.707f,
////        -0.5f, -0.5f,
////        0.5f, -0.5f
////    };

////    static const GLfloat colors[] = {
////        1.0f, 0.0f, 0.0f,
////        0.0f, 1.0f, 0.0f,
////        0.0f, 0.0f, 1.0f
////    };
////    float vertices[] = {
////        -0.5f, -0.5f, 0.0f,
////        0.5f, -0.5f, 0.0f,
////        0.0f,  0.5f, 0.0f
////    };
//    float vertices[] = {
//        // first triangle
//        0.05f,  0.05f, 0.0f,  // top right
//        0.05f, -0.05f, 0.0f,  // bottom right
//        -0.05f,  0.05f, 0.0f,  // top left
//        // second triangle
//        0.05f, -0.05f, 0.0f,  // bottom right
//        -0.05f, -0.05f, 0.0f,  // bottom left
//        -0.05f,  0.05f, 0.0f   // top left
//    };
////    glVertexAttribPointer(m_posAttr, 2, GL_FLOAT, GL_FALSE, 0, vertices);
////    glVertexAttribPointer(m_colAttr, 3, GL_FLOAT, GL_FALSE, 0, colors);
////    glEnableVertexAttribArray(m_posAttr);
////    glEnableVertexAttribArray(m_colAttr);
//    glVertexAttribPointer(m_aPos, 3, GL_FLOAT, GL_FALSE, 0, vertices);
//    glEnableVertexAttribArray(m_aPos);
//    glDrawArrays(GL_TRIANGLES, 0, 6);

////    glDisableVertexAttribArray(m_colAttr);
////    glDisableVertexAttribArray(m_posAttr);
//    glDisableVertexAttribArray(m_aPos);
//    m_program->release();

//    ++m_frame;
    p_game->print();
}

int TriangleWindow::getPacsDir(){
    return p_game->p_pacman->dir;
}

QMatrix4x4& TriangleWindow::getDirAsMatrix(QMatrix4x4& matrix){
    switch(getPacsDir())
    {
    case PacMan::up:
        matrix.translate(0, float(2/11.0) * p_game->p_pacman->y, 0);
        break;
    case PacMan::left:

        matrix.translate(float(-2/11) * p_game->p_pacman->x, 0, 0);
        break;
    case PacMan::down:

        matrix.translate(0,float(-2/11.0) * p_game->p_pacman->x, 0);
        break;
    case PacMan::right:

        matrix.translate(float(2/11)*p_game->p_pacman->x, 0, 0);
        break;
    }
    return matrix;
}
