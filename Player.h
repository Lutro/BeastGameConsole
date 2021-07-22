
#ifndef UNTITLED3_PLAYER_H
#define UNTITLED3_PLAYER_H

#include<string>
#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Player {
public:
    Player();
    Player(string player_name);
    bool still_alive();
    int getAtk(){return current_atk;}
    int getOAtk(){return original_atk;}
    int getDef(){return current_def;}
    int getHp(){return current_hp;}
    int getOHp(){return original_hp;}
    void reset();
    // void getSkill(string, int, int, int);
    // void actSkill(int);
    // void buff(Skill);
    // void buffOff(Skill);
    // bool printSkills();
    void takeDamage(int);
    void check();

private:
    string name;
    int original_hp;
    int current_hp;
    int original_atk;
    int current_atk;
    int original_def;
    int current_def;
    // vector<Skill> skills;
    

};


#endif //UNTITLED3_PLAYER_H
