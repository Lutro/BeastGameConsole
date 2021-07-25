
#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

enum class CharacterType
{
    Hunter = 1, Warrior = 2, Shaman = 3
};

class Player {
public:
    Player();
    Player(string player_name);
    bool still_alive();
    
    void setSpiritType(CharacterType);

private:
    string name;
    CharacterType spiritType;
 };

#endif //PLAYER_H
