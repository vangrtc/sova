#include "wopengl.h"
#include <QtOpenGL>
#include <GL/gl.h>

WOpengl::WOpengl()
{
    angle = 0;
    timer = new QTimer;
    QObject::connect(timer,SIGNAL(timeout()),SLOT(tiktack()));
    timer->start(50);
}


void WOpengl::initializeGL()
{
    //Задаем цвет фона в OpenGL окне
    qglClearColor(Qt::green);

    //Задаем режим обработки полигонов - переднюю и заднюю часть, полигоны полностью закрашеные (а можно просто рамку отображать)
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void WOpengl::resizeGL(int nWidth, int nHeight)
{
    //Установляем точку обзора. Последние два параметры одинаковы - чтобы не нарушать пропорции у широких экранов (можете поекспериментировать)
    glViewport(0, 0, nHeight, nHeight);

    //Установляем режим матрицы
    glMatrixMode(GL_PROJECTION);

    //Загружаем матрицу
    glLoadIdentity();
}

void WOpengl::paintGL()
{
    //Очищаем экран
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Задаем режим матрицы
    glMatrixMode(GL_PROJECTION);

    //Загружаем матрицу
    glLoadIdentity();

    //Здесь рисуем - для удобства в отдельной функции
    scene();
    //выводим на екран
    swapBuffers();
}


void WOpengl::scene()
{

    //Задаем цвет изображения
    qglColor(Qt::green);

    //Начинаем отрисовку, аргумент означает отрисовку прямоугольника. Каждый вызов glVertex3f задает одну вершину прямоугольника
    glBegin(GL_QUADS);
    glVertex3f (0.51, 0.51, 0.51);
    glVertex3f (-0.51, 0.51, 0.51);
    glVertex3f (-0.51, -0.51, 0.51);
    glVertex3f (0.51, -0.51, 0.51);
    glEnd();
}

void WOpengl::rotate()
{
    //При каждом вызове функции прибавляем к углу поворота один градус
    angle += 1;

    //Проверяем переполнение (360 градусов)
    (angle > 360)? angle = 0: 0;

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //Очищаем экран
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    //Делаем поворот системы
    glRotated(angle,0,0,1);

    //Вызываем функцию отрисовки для
    paintGL();
}

void WOpengl::tiktack()
{
    rotate();
}

void WOpengl::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
    case Qt::Key_Escape :
        qApp->quit();
        break;
    default:
        break;
    }
}
