#include "Card.h"


ostream &operator<<(ostream &output, const Card c)
{
    string cardType;
      switch(c.cardType)
        {
            case Type::Attack:
            cardType = "Attack";
            break;
            case Type::Skill:
            cardType = "Skill";
            break;
            case Type::Status:
            cardType = "Status";
            break;
        }
    output << left
            << setw(10) << cardType
            << setw(30) << c.cardName
            << setw(30) << c.description
            << setw(10) << c.cost
            << setw(10) << c.rarity
            << setw(10) << c.color << endl;
}