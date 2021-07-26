#ifndef DECK_H
#define DECK_H
#include <stdexcept>
#include "Card.h"
using namespace std;

int const STARTER_DECK_SIZE = 10;

template<typename T>
class Deck
{
public:
    Deck();
    Deck(CharacterType);
    
    drawCard();
    
    const int getCurrentDeckSize() const;
    void setCurrentSize(int);
    
    const string getDeckName() const;
    void setDeckName(string);
    
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
    string deckName;
};






#endif