#ifndef CARD_H
#define CARD_H
#include <string>
#include <iomanip>
#include <fstream>
#include "Entity.h"
using namespace std;

enum class Type
{
    Attack,
    Skill,
    Status
};

class Card {
    public:
        Type cardType;
        Sprite mSprite;
        string cardName;
        string description;
        int value;
        int cost;
        int rarity;
        string color;
        
        friend ostream &operator<<(ostream &output, const Card c);
};

#endif