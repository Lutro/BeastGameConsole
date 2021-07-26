
#include "../util/FileUtil.h"


struct cardStore 
{
    Table allCardsTable;
    
    Table warriorCardTable;
    Table hunterCardTable;
    Table shamanCardTable;
    
    cardStore();
    
    const Table getWarriorCardTable() const;
    void setWarriorCards();
    
    const Table getShamanCardTable() const;
    void setShamanCards();
    
    const Table getHunterCardTable() const;
    void setHunterCards();
};