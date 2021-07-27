#include "headers/Card.h"

Card::Card()
{
  
}

Card::Card(vector<string> row)
{
  setType(stoi(row[0]));
  // setSprite(row[1]);
  setCost(stoi(row[2]));
  setRarity(stoi(row[3]));
  setValue(stoi(row[4]));
  setName(row[5]);
  setDescription(row[6]);
  setEffect(stoi(row[7]));
  setColor(stoi(row[7]));
  
}

const Type Card::getType() const { return mType; }

void Card::setType(Type newType) 
{ 
  mType = newType; 
  
}

void Card::setType(int ctype) 
{ 
    switch(ctype)
    {
      case 1:
        mType = Type::Combat;
        break;
      case 2:
        mType = Type::Magic;
        break;
    }
}

const Color Card::getColor() const { return mColor; }

void Card::setColor(Color newColor) 
{ 
  mColor = newColor;
}

void Card::setColor(int effect) 
{ 
  switch(effect)
  {
    case 1:
      mColor = Color::Red;
      break;
    case 2:
      mColor = Color::Blue;
      break;
    case 3:
      mColor = Color::Green;
      break;
  };
}

const int Card::getCost() const { return mCost; }
void Card::setCost(int newCost) { mCost = newCost; }

const int Card::getRarity() const { return mRarity; }
void Card::setRarity(int newRarity) { mRarity = newRarity; }

const int Card::getValue() const { return mValue; }
void Card::setValue(int newValue) { mValue = newValue; }

const string Card::getDescription() const { return mDescription; }
void Card::setDescription(string newDescription) { mDescription = newDescription; }

const string Card::getName() const { return mCardName; }
void Card::setName(string newName) { mCardName = newName; }

const Effect Card::getEffect() const { return mEffect; }
void Card::setEffect(Effect e) { mEffect = e; }

void Card::setEffect(int e) 
{ 
    switch(e)
    {
      case 1:
        mEffect = Effect::Attack;
        break;
      case 2:
        mEffect = Effect::Skill;
        break;
      case 3:
        mEffect = Effect::Status;
        break;
    }
}

// print card
ostream &operator<<(ostream &output, const Card c)
{
    string cardTypeStr;
    string colorStr;
    string effectStr;
    
    switch(c.mType)
    {
      case Type::Combat :
        cardTypeStr = "Combat";
        break;
      case Type::Magic :
        cardTypeStr = "Magic";
        break;
    }
    
    switch(c.mColor)
    {
      case Color::Red:
        colorStr = "Red";
        break;
      case Color::Green:
        colorStr = "Green";
        break;
      case Color::Blue:
        colorStr = "Blue";
        break;
    }
    
    switch(c.mEffect)
    {
      case Effect::Attack:
        effectStr = "Attack";
        break;
      case Effect::Skill:
        effectStr = "Skill";
        break;
      case Effect::Status:
        effectStr = "Status";
        break;
    }
    
    output << left
            << setw(10) << cardTypeStr
            << setw(10) << c.mCost
            << setw(10) << c.mRarity
            << setw(10) << effectStr
            << setw(10) << colorStr
            << setw(30) << c.mCardName
            << setw(50) << c.mDescription
            << endl;
}