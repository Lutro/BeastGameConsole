#ifndef DECK_H
#define DECK_H
#include <stdexcept>
#include "Card.h"
using namespace std;

template<typename T>
class Deck
{
public:
    Deck();
    ~Deck();
    drawCard();
    void shuffle();
    void addCard(Card c);
    void removeCard(int index);
    void clearDeck();
    Deck& createWarriorStarterDeck();
    Deck& createShamanStarterDeck();
    Deck& createHunterStarterDeck();
    
private:
    PQueue<Card> deckList;
    int currentSize;
};






#endif