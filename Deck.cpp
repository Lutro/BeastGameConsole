#include "headers/Deck.h"

Deck::Deck()
{
    
}

Deck::Deck(CardStore& csref)
{
    rogueCardStoreRef = &csref;
}

const int Deck::getCurrentDeckSize() const
{
    return currentSize;
}

 void Deck::setCurrentSize(int dsize)
 {
     currentSize = dsize;
 }

const string Deck::getDeckName() const
{
    return deckName;
}

void Deck::setDeckName(string newdname)
{
    deckName = newdname;
}

Deck& Deck::createHunterStarterDeck()
{
    setCurrentSize(STARTER_DECK_SIZE);
    setDeckName("Starter Hunter Deck");
    
    for (int i = 0; i < STARTER_DECK_SIZE; i++) 
    {
        deckList.enqueue(rogueCardStoreRef->getRandomCard(CharacterType::Hunter),i);
    }
    return *this;
}

