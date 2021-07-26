
#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include <iostream>
#include <vector>
#include "Card.h"
#include "Hand.h"

using namespace std;

class Player: public Entity {
public:
    Player();
    Player(string player_name);
    bool still_alive();
    
    void setSpiritType(CharacterType);

private:
    Hand playerHand;
 };

#endif //PLAYER_H
