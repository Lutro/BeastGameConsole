#include "headers/cardStore.h"


cardStore::cardStore()
{
    CSVReader reader("data/all_cards_data.csv");
    allCardsTable = reader.readData();
}