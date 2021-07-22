#include "Game.h"
#include "Player.h"


void Game::run()
{
    
    int option = 5;
    string playerName;
    while(option)
    {
        drawMenu();
        cin >> option;
        switch (option) {
            case 1:
                cout << "Welcome, Please Enter your name:" << endl;
                cin >> playerName;
                mPlayer = Player(playerName);
                break;
            case 2:
                cout << "file loading.." << endl;
                break;
            case 3:
                exit(0);
        }
        
    }
    // Game loop
    while (mPlayer.still_alive())
    {
    //
    }
    
}

void Game::drawMenu()
{
    cout << "Battle Beast Game Adventure" << endl;
    cout << "Choose an option" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Load Game File" << endl;
    cout << "3. Exit" << endl;
}