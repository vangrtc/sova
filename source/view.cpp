#include "view.h"
#include <QtOpenGL>
#include <OpenGL/gl.h>

view::view()
{
    angle = 0;
    timer = new QTimer;
    QObject::connect(timer,SIGNAL(timeout()),SLOT(tiktack()));
    timer->start(50);
}

view::viewMenu(void* state)
{

/*    void drawMenu(void state)
    {
     switch(state):
        case 'start':
         drawStartMenu();
        break;
        case 'continue':
         drawContinueMenu();
        break;
        case 'save':
         drawSaveMenu();
        break;
        case 'load':
         drawLoadMenu();
        break;

        default:
         drawContinueMenu();
        break;

    };

    void drawStartMenu();
    void drawLoadMenu();
    void drawSaveMenu();
    void drawOptionsMenu();
    void drawContinueMenu();

*/
}

view::scene(void* state, void* type, void* action)
{


}


