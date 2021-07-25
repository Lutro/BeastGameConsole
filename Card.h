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

enum class Color {
    Red, Green, Blue
};

enum class Effect {
    Heal,Block
};

class Card {
    public:
        const Type getType() const;
        void setType(Type);
        const Color getColor() const;
        void setColor(Color);
        const int getCost() const;
        void setCost(int);
        const int getRarity() const;
        void setRarity(int);
        const int getValue() const;
        void setValue(int);
        const string getName() const;
        void setName(string);
        const string getDescription() const;
        void setDescription(string);
        const Effect getEffect() const;
        void setEffect(Effect);
    
    
    friend ostream &operator<<(ostream &output, const Card c);
    
    private:
        Type mType;
        Sprite mSprite;
        int mCost;
        int mRarity;
        int mValue;
        string mCardName;
        string mDescription;
        Color mColor;
        Effect mEffect;
};

#endif