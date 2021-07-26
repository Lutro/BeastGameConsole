#include "headers/Player.h"

Player::Player() 
{
    setEntityName("Agent");
}

Player::Player(string player_name) 
{
    setEntityName(player_name);
}

void Player::setSpiritType(CharacterType cType)
{
    setEntityType(cType);
}

bool Player::still_alive() 
{
    if(true){
        return true;
    } else{
        return false;
    }
}

