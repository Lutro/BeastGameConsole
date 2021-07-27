
#include "../util/FileUtil.h"


class CardStore 
{
    public:
        CardStore();
        
        const Table& getWarriorCardTable() const;
        void setWarriorCards();
        
        const Table& getShamanCardTable() const;
        void setShamanCards();
        
        const Table& getHunterCardTable() const;
        void setHunterCards();
        
        Card getRandomCard();
        Card getRandomCard(CharacterType);
        
    private:
        Table allCardsTable;
        
        Table warriorCardTable;
        Table hunterCardTable;
        Table shamanCardTable;
    
};