#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "Card.h"
// #include "Deck.h"

enum class CharacterType
{
    Hunter = 1, Warrior = 2, Shaman = 3
};

struct Sprite {
    std::string spriteName;
    std::string spriteFilename;
};

class Entity 
{
    public:
        Entity();
        
        // Mutators
        void setEntityName(std::string name);
        void setEntityType(CharacterType);
        void setEntityHitpoints(int newHitpoints);
        void setEntityMana(int newMana);
        
        void damage(int points);
        void repair(int points);
        
        // Getters
        std::string getEntityName();
        int getEntityHitpoints();
        int getEntityMana();
        // Deck getDeck();
        
        
    private: 
        std::string name;
        int hitpoints;
        int mana;
        // Deck entityDeck;
        CharacterType spiritType; // SpiritType is the Role
};

#endif