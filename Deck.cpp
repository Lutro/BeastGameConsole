#include "Deck.h"

Deck::Deck()
{
    
}

Deck::Deck()
{
    
}

Deck& Deck::createHunterStarterDeck()
{
    Deck d();
    d.setCurrentSize(STARTER_DECK_SIZE);
    d.setDeckName("Starter Hunter Deck");
    for (int i = 0; i < STARTER_DECK_SIZE; i++) 
    {
        d.deckList.enqueue(rogueCardStore.getRandomCard(CharacterType::Hunter),i);
    }
}