/* //#include "stdio.h"
#include <iostream>
#include <string>
#include "stdio.h"
#include <conio.h>

using namespace std;

class processWatcher
{
public:
    string name;
};

class GState
{
public:
    string name;


};

class world
{

public:
    char map[100][100];

public:
    void mapInit()
    {
        for (int i = 0; i++; i < 100)
        {

            for (int j = 0; j++; j < 100)
            {
                map[i][j] == ' ';
            }
        }

        for (int i = 0; i++; i < 10)
        {
            int x = rand() % 10;
            int y = rand() % 10;
            map[x][y] = 'Z';

        }
    }
};




class view
{
public:

    void map(world zombo)
    {

        for (int i = 0; i++; i < 10)
        {
            for (int j = 0; j++; j < 10)
            {
                cout << zombo.map[i][j];
            }
        }

    }

};

int main()
{
    char doit;
    world mir;
    mir.mapInit();
    view viewmenu;
    viewmenu.initMenu();
    doit = getchar();
    viewmenu.menu(doit,mir);



//	statesInit();
//	GState startState;
//	string name;
//	name = "asd";
//	startState.name = "start,please";
//	cout << startState.name;
//	cout << "hello,world";

//	int color;

//	for (color = 1; color < 16; color++)
//	{
//		textattr(color);
//		cprintf("Текущий цвет - %d\r\n", color);
//	}
//	textattr(128 + 15);


    system("PAUSE");
    return 0;
}
*/
