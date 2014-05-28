#ifndef VIEW_H
#define VIEW_H

#include <QGLWidget>
#include <QTimer>

class view : public QGLWidget
{
    Q_OBJECT
public:
    view();
    void menu(void* state);
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();
    void scene();

    QTimer *timer;
    void keyPressEvent(QKeyEvent* event);

 public slots:
     void tiktack();

};

class viewMenu
{
    // состояния:
    // 0 - начальное состояние меню
    // 1 - меню вызванное в момент игры
    // 2 - меню загрузки
    // 3 - меню сохранения
    // 4 - настройки
    // 5 - выход из игры

    //Варианты переходов:
    // 0 -> (gc(new), 2,4,5)
    // 1 -> (gc(new),gc(continue),2,3,4,5)
    // 2 -> (gc(load),0,1)
    // 3 -> (gc(save),0,1)
    // 4 -> (option(save),0,1)
    // 5 -> gc(end)
public:
    void drawMenu(void state);

    void drawStartMenu();
    void drawLoadMenu();
    void drawSaveMenu();
    void drawOptionsMenu();
    void drawContinueMenu();
};


class viewScene
{
    // Отрисовка сцены states:
    // 0 - отрисовка глобальной карты
    // 1 - отрисовка города
    // 2 - отрисовка локации



};



#endif // VIEW_H
