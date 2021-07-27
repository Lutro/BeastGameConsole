
#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include <iostream>
#include <vector>
#include "Deck.h"
#include "Hand.h"

using namespace std;

class Player: public Entity {
public:
    Player();
    Player(string player_name);
    bool still_alive();
    
    const CharacterType getSpiritType() const;
    void setSpiritType(CharacterType);
    void setPlayerDeck(Deck);
    
    friend ostream &operator<<(ostream &output, const Player p);
    
private:
    Hand playerHand;
    Deck playerDeck;
 };

#endif //PLAYER_H
