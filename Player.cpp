#include "headers/Player.h"

Player::Player() 
{
    setEntityName("Agent");
}

Player::Player(string player_name) 
{
    setEntityName(player_name);
}

void Player::setPlayerDeck(Deck d)
{
    playerDeck = d;
}

const CharacterType Player::getSpiritType() const
{
    return spiritType;
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

 ostream &operator<<(ostream &output, const Player p)
 {
     string spiritTypeStr;
     
     switch(p.getSpiritType())
     {
         case CharacterType::Hunter:
            spiritTypeStr = "Hunter Wolf";
            break;
         case CharacterType::Warrior:
            spiritTypeStr = "Bear Warrior";
            break;
         case CharacterType::Shaman:
            spiritTypeStr = "Eagle Shaman";
            break;
     }
     
     output << 
        "======================" <<
        "\nPlayer Name: " << p.name <<
        "\nPlayer Spirit: " << spiritTypeStr <<
        "\nHP: " << p.hitpoints <<
        "\nMana: " << p.mana <<
        "\nDeck: \n" << (p.playerDeck) <<
        "\n======================"
        << endl;
        
        
        
 }

