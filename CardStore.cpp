#include "headers/CardStore.h"


CardStore::CardStore()
{
    CSVReader reader("data/all_cards_data.csv");
    allCardsTable = reader.readData();
    setHunterCards();
    setWarriorCards();
    setShamanCards();
}

const Table& CardStore::getWarriorCardTable() const
{
    return warriorCardTable;
}

void CardStore::setWarriorCards()
{
    CSVReader reader("data/warrior_card_data.csv");
    warriorCardTable = reader.readData();
}
    
const Table& CardStore::getShamanCardTable() const
{
    return shamanCardTable;
}

void CardStore::setShamanCards()
{
    CSVReader reader("data/shaman_card_data.csv");
    shamanCardTable = reader.readData();
}
    
const Table& CardStore::getHunterCardTable() const
{
    return hunterCardTable;
}

void CardStore::setHunterCards()
{
    CSVReader reader("data/hunter_card_data.csv");
    hunterCardTable = reader.readData();
}

Card CardStore::getRandomCard()
{
    
}

Card CardStore::getRandomCard(CharacterType ctype)
{
    const Table * store;
    switch(ctype)
    {
        case CharacterType::Hunter :
            store = &getHunterCardTable();
            break;
        case CharacterType::Warrior :
            store = &getWarriorCardTable();
            break;
        case CharacterType::Shaman :
            store = &getShamanCardTable();
            break;
    }
    Card c = Card();
    // Card c = Card(vector<string> store.getRandomRow());
    return c;
}