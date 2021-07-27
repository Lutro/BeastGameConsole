#ifndef CARD_H
#define CARD_H
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

enum class Type
{
    Combat, Magic
};

enum class Color {
    Red,
    Green, 
    Blue
};

enum class Effect {
    Attack,
    Skill,
    Status
};

class Card {
    public:
        Card();
        Card(vector<string>);
    
        const Type getType() const;
        void setType(Type);
        void setType(int);
        const Color getColor() const;
        void setColor(Color);
        void setColor(int);
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
        void setEffect(int);
    
    
    friend ostream &operator<<(ostream &output, const Card c);
    
    private:
        Type mType;
        // Sprite mSprite;
        int mCost;
        int mRarity;
        int mValue;
        string mCardName;
        string mDescription;
        Color mColor;
        Effect mEffect;
};

#endif