#ifndef HAND_H
#define HAND_H

#include <string>
#include "Deck.h"
#include "Card.h"
#include "../lib/PQueue.h"

class Hand 
{
    public:
        Hand();
        Card drawCardFromDeck(Deck d);
        Card drawCardFromDeck(int fromIndex);
        // Card playCard(int index);
        
        void setHandName(std::string name);
        void setCurrentSize(int size);
        
        const std::string getHandName() const;
        const int getCurrentHandSize() const;
        
        PQueue<Card>* handList;
        friend ostream &operator<<(ostream &output, Hand h);
        
    private:
        int currentSize;
        std::string handName;
};

#endif