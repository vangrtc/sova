#ifndef WOPENGL_H
#define WOPENGL_H

#include <QGLWidget>
#include <QTimer>

class WOpengl : public QGLWidget
{
    Q_OBJECT
public:
    WOpengl();
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();
    void scene();

   double angle;
    void rotate();
    QTimer *timer;
public slots:
    void tiktack();
};

#endif // WOPENGL_H
