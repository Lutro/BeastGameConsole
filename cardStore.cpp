#include "headers/cardStore.h"


cardStore::cardStore()
{
    CSVReader reader("data/all_cards_data.csv");
    allCardsTable = reader.readData();
    setHunterCards();
    setWarriorCards();
    setShamanCards();
}

const Table cardStore::getWarriorCardTable() const
{
    return warriorCardTable;
}

void cardStore::setWarriorCards()
{
    CSVReader reader("data/warrior_card_data.csv");
    warriorCardTable = reader.readData();
}
    
const Table cardStore::getShamanCardTable() const
{
    return shamanCardTable;
}

void cardStore::setShamanCards()
{
    CSVReader reader("data/shaman_card_data.csv");
    shamanCardTable = reader.readData();
}
    
const Table cardStore::getHunterCardTable() const
{
    return hunterCardTable;
}

void cardStore::setHunterCards()
{
    CSVReader reader("data/hunter_card_data.csv");
    hunterCardTable = reader.readData();
}