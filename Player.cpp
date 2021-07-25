#include "headers/Player.h"

Player::Player() {
   
    name="Agent";
}

Player::Player(string player_name) {
    
    name=player_name;
}

void Player::setSpiritType(CharacterType cType)
{
    spiritType = cType;
}

bool Player::still_alive() {
    if(true){
        return true;
    } else{
        return false;
    }
}

