#include "headers/Card.h"

Card::Card()
{
  
}

Card::Card(vector<string> row)
{
  setType(row[0]);
  // setSprite(row[1]);
  setEffect(row[2]);
  setCost(stoi(row[3]));
  setRarity(stoi(row[4]));
  setValue(stoi(row[5]));
  setName(row[6]);
  setDescription(row[7]);
  
}

const Type Card::getType() const { return mType; }

void Card::setType(Type newType) 
{ 
  mType = newType; 
  
}

void Card::setType(string ctypeStr) 
{ 
    if (ctypeStr.compare("Magic") == 0)
        mType = Type::Magic;
    if (ctypeStr.compare("Combat") == 0)
        mType = Type::Combat;
    else
        mType = Type::Combat;
}

const Color Card::getColor() const { return mColor; }
void Card::setColor(Color newColor) { mColor = newColor; }

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

void Card::setEffect(string effectStr) 
{

    if (effectStr.compare("attack") == 0)
        mEffect = Effect::Attack;
    if (effectStr.compare("skill") == 0)
        mEffect = Effect::Skill;
    if (effectStr.compare("status") == 0)
        mEffect = Effect::Status;
    else
        mEffect = Effect::Status;

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
            << setw(30) << c.mCardName
            << setw(30) << c.mDescription
            << setw(10) << c.mCost
            << setw(10) << c.mRarity
            << setw(10) << colorStr << endl;
}