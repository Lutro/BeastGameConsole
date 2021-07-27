#ifndef DECK_H
#define DECK_H
#include <stdexcept>
#include "Card.h"
#include "CardStore.h"
#include "../lib/PQueue.h"
using namespace std;

const int STARTER_DECK_SIZE = 10;

class Deck
{
public:
    Deck();
    
    Deck(CardStore&);
    
    Card drawCard();
    
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
    
    PQueue<Card>* deckList;
    
    friend ostream &operator<<(ostream &output, Deck d);
private:
    int currentSize;
    string deckName;
    CardStore* rogueCardStoreRef;
};






#endif