#include "headers/Deck.h"

Deck::Deck()
{
    
}

Deck::Deck(CardStore& csref)
{
    rogueCardStoreRef = &csref;
    PQueue<Card> clist = PQueue<Card>();
    this->deckList = &clist;
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
        deckList->enqueue(rogueCardStoreRef->getRandomCard(CharacterType::Hunter),i);
    }
    return *this;
}

Deck& Deck::createWarriorStarterDeck()
{
    setCurrentSize(STARTER_DECK_SIZE);
    setDeckName("Starter Warrior Deck");
    
    for (int i = 0; i < STARTER_DECK_SIZE; i++) 
    {
        deckList->enqueue(rogueCardStoreRef->getRandomCard(CharacterType::Warrior),i);
    }
    return *this;
}

Deck& Deck::createShamanStarterDeck()
{
    setCurrentSize(STARTER_DECK_SIZE);
    setDeckName("Starter Shaman Deck");
    
    for (int i = 0; i < STARTER_DECK_SIZE; i++) 
    {
        deckList->enqueue(rogueCardStoreRef->getRandomCard(CharacterType::Shaman),i);
    }
    return *this;
}

// print deck
ostream &operator<<(ostream &output, const Deck d)
{
    output << "======================\n";
    output << "Number of cards: " << d.getCurrentDeckSize();
    for (int i = 0; i < d.getCurrentDeckSize(); i++) 
    {
        // output << d.deckList->dequeue();
    }
    output << "\n======================" << endl;
    
}
