#ifndef GAME_H
#define GAME_H

#include "Entity.h"

class Game 
{
public:

	void    run();
    // Draw start menu
    void    drawMenu();
    void    displaySpiritCharacters();
    void    startNewGame();
    // load from file
    // save to file

private:
	Entity  mPlayer;
};

#endif // GAME_H


