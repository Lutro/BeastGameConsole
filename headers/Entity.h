#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>
#include "Deck.h"
// #include "Hand.h"

// enum class CharacterType
// {
//     Hunter = 1, Warrior = 2, Shaman = 3
// };

// CharacterType CharacterType::string_to_ctype(std::string ctypeStr)
// {
//     if (ctype.compare("Hunter")
//         return CharacterType::Hunter;
//     if (ctype.compare("Warrior")
//         return CharacterType::Warrior;
//     if (ctype.compare("Shaman")
//         return CharacterType::Shaman;
//     else
//         return CharacterType::Shaman;
// }

// string CharacterType::ctype_toString(CharacterType ctype)
// {
//     switch(ctype)
//     {
//         case 1:
//             return "Hunter";
//             break;
//         case 2:
//             return "Warrior";
//             break;
//         case 3:
//             return "Shaman"
//             break;
//     }
// }

struct Sprite {
    std::string spriteName;
    std::string spriteFilename;
};

class Entity 
{
    public:
        Entity();
        Entity(std::string name);
        void generateDeck(CharacterType);
        bool still_alive();
        
        // Mutators
        void setEntityName(std::string name);
        void setEntityType(CharacterType);
        void setEntityHitpoints(int newHitpoints);
        void setEntityMana(int newMana);
        void setSpiritType(CharacterType);
        
        void damage(int points);
        void repair(int points);
        
        // Getters
        std::string getEntityName();
        int getEntityHitpoints();
        int getEntityMana();
        Deck getDeck();
        
        
    private: 
        std::string name;
        int hitpoints;
        int mana;
        Deck entityDeck;
        CharacterType spiritType; // SpiritType is the Role
};

#endif