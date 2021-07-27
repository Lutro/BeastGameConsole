
#include "../util/FileUtil.h"

enum class CharacterType
{
    Hunter = 1, Warrior = 2, Shaman = 3, Fox = 4
};

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