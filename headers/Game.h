#ifndef GAME_H
#define GAME_H

#include "Player.h"

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
	Player  mPlayer;
};

#endif // GAME_H


