#include "headers/Game.h"
#include "headers/Entity.h"


void Game::run()
{
    // Initial game menu
    int option = 5;
    while(option)
    {
        drawMenu();
        cin >> option;
        switch (option) {
            case 1:
                startNewGame();
                break;
            case 2:
                cout << "file loading.." << endl;
                break;
            case 3:
                return;
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

// ToDo: display stats and starting deck 
void Game::displaySpiritCharacters()
{
    cout << "Choose an option" << endl;
    cout << "1. Hunter Wolf" << endl;
    cout << "2. Bear Warrior" << endl;
    cout << "3. Eagle Shaman" << endl;
    cout << "4. Back" << endl;
    cout << "5. Exit" << endl;
}


void Game::startNewGame()
{
    // get player name
    string playerName;
    cout << "Welcome, Brave Warrior. What is your name?" << endl;
    cin >> playerName;
    
    // init player
    mPlayer = Entity(playerName);
    
    // get player character type
    cout << "What Is Your Animal Spirit Force:" << endl;
    
    bool isCharacterSet = false;
    int option;
    while(!isCharacterSet)
    {
        displaySpiritCharacters();
        cin >> option;
        switch (option) {
            case 1:
                mPlayer.setSpiritType(CharacterType::Hunter);
                isCharacterSet = true;
                break;
            case 2:
                mPlayer.setSpiritType(CharacterType::Warrior);
                isCharacterSet = true;
                break;
            case 3:
                mPlayer.setSpiritType(CharacterType::Shaman);
                isCharacterSet = true;
                break;
            case 4:
                // Go back
              
                break;
            case 5:
                //exit
                exit(0);
            default:
                //ToDO: Not valid? ask again
                cout << "That is not a valid character type. Try again." << endl;
                break;
        }
        
    }
    
    // 
    
    
}