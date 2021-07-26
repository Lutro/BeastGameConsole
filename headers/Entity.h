#include <string>

enum class CharacterType
{
    Hunter = 1, Warrior = 2, Shaman = 3
};

struct Sprite {
    std::string spriteName;
    std::string spriteFilename;
};