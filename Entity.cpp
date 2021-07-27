#include "headers/Entity.h"

Entity::Entity() 
{
    name = "Agent";
    // Arbritary Values
    hitpoints = 10;
    mana = 5;
}

Entity::Entity(std::string name)
{
    
}

void Entity::generateDeck(CharacterType spiritType) 
{
    CardStore cs;
    entityDeck = Deck(cs);
    switch (spiritType) {
        case CharacterType::Hunter: {
            entityDeck = entityDeck.createHunterStarterDeck();
            break;
        }
    }
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

void Entity::setSpiritType(CharacterType cType)
{
    spiritType = cType;
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
std::string Entity::getEntityName() 
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

Deck Entity::getDeck() {
    return entityDeck;
}

bool Entity::still_alive() 
{
    if(true){
        return true;
    } else{
        return false;
    }
}
