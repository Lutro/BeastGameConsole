#include "headers/Hand.h"

Hand::Hand() 
{
    PQueue<Card> hList = PQueue<Card>();
    this->handList = &hList;
    currentSize = handList->getSize();
}

Card Hand::drawCardFromDeck(Deck d) 
{
    // d.deckList->dequeue();
    // handList->enqueue(lol, handList->getSize());
    // handList->enqueue(d.deckList->dequeue(), 0);
    // cout << handList->getSize();
    // currentSize = handList->getSize();
}

void Hand::setHandName(std::string name) {
    handName = name;
}

void Hand::setCurrentSize(int size) {
    currentSize = size;
}

const std::string Hand::getHandName() const
{
    return handName;
}

const int Hand::getCurrentHandSize() const 
{
    return currentSize;
}

// print hand
ostream &operator<<(ostream &output, const Hand h)
{
    output << "======================\n";
    output << "Number of cards: " << h.getCurrentHandSize();
    for (int i = 0; i < h.getCurrentHandSize(); i++) 
    {
        // output << h.handList->dequeue();
    }
    output << "\n======================" << endl;
    
}