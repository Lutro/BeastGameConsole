#ifndef COMMAND_H
#define COMMAND_H

#include <string>


struct Command
{
    Command();
    
    std::string action;
    unsigned int category;
}

// GameObject derivedAction(std::string fn)
// {
//     if (currentScene.empty())
//     {
//         return 
//     }
// }


#endif // COMMAND_H