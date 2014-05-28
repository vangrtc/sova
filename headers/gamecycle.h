#ifndef GAMECYCLE_H
#define GAMECYCLE_H

#include <string>

class gamecycle
{


// struct location
// {
//    string name;
//    void* map[64][64];
// };


 struct city
 {
     string name;
     location* locations;

 };



public :
    //game states
    void newGame();
    void loadGame();
    void saveGame();

    void initCity();
    void initLocation();

};




#endif // GAMECYCLE_H
