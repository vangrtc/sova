#ifndef CYCLE_H
#define CYCLE_H

#include <QtOpenGL>


class InputActions : public QGLWIdget
{
    Q_OBJECT

public:
    initInput();

protected:
    int mouseX,mouseY; //Координаты курсора
    void self_cursor();
    void keyPressEvent(QKeyEvent *ke);
    void mouseMoveEvent(QMouseEvent *me);
    void mousePressEvent(QMouseEvent *me);
    void mouseReleaseEvent(QMouseEvent *me);


};



#endif // CYCLE_H
