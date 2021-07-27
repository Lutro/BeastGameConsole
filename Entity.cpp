#include "headers/Entity.h"

Entity::Entity() 
{
    
}

// Mutators
void Entity::setEntityName(std::string name) 
{
    this->name = name;
}

void Entity::setEntityType(CharacterType spiritType) 
{
    this->spiritType = spiritType;
}

void Entity::setEntityHitpoints(int newHitpoints) 
{
    hitpoints = newHitpoints;
}

void Entity::setEntityMana(int newMana) 
{
    mana = newMana;
}

void Entity::damage(int points) 
{
    hitpoints -= points;
}

void Entity::repair(int points)
{
    hitpoints += points;
}

// Getters
string Entity::getEntityName() 
{
    return name;
}

int Entity::getEntityHitpoints()
{
    return hitpoints;
}

int Entity::getEntityMana()
{
    return mana;
}

// Deck Entity::getDeck() {
//     return entityDeck;
// }