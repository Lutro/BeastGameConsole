
#include "Player.h"
Player::Player() {
    current_hp = 20;
    original_hp = 20;
    current_atk=50;
    original_atk = 50;
    current_def=50;
    name="Agent";
}

Player::Player(string player_name) {
    current_hp = 20;
    original_hp = 20;
    current_atk=50;
    original_atk = 50;
    current_def=50;
    name=player_name;
}

bool Player::still_alive() {
    if(current_hp>0){
        return true;
    } else{
        return false;
    }
}

void Player::reset() {
    current_hp = original_hp;
    current_atk = original_atk;
    current_def = original_def;
}

// void Player::getSkill(string sName, int atk, int def,int time){
//     skills.push_back(Skill(sName,atk,def,time));
// }

// void Player::actSkill(int num) {
//     if(skills[num].isAvailable()){
//         skills[num].act();
//         this->buff(skills[num]);
//     }else{
//         cout<<"The skill is not available!"<<endl;
//     }

// }

// void Player::buff(Skill s) {
//     cout<<"You use "<<s.getSkill()<<endl;
//     cout<<endl;
//     current_atk+=s.atkBuff();
//     current_def+=s.defBuff();
// }

// void Player::buffOff(Skill s) {
//     cout<<"Affect of Your "<<s.getSkill()<<" has been overed"<<endl;
//     cout<<endl;
//     current_atk-=s.atkBuff();
//     current_def-=s.defBuff();
// }

// bool Player::printSkills() {
//     if(skills.empty()){
//         return false;
//     }
//     for (unsigned i = 0; i < skills.size(); i++) {
//         cout<<i+1<<". "<<skills[i].getSkill()<<endl;
//     }
//     return true;
// }

// void Player::check() {
//     for (unsigned i = 0; i < skills.size(); i++) {
//         if(skills[i].isActing()||skills[i].isCooling()){
//             skills[i].timePast();
//             if(skills[i].isActing()&&skills[i].turn_counter>skills[i].buffDuration()){
//                 this->buffOff(skills[i]);
//                 skills[i].beginCooling();

//             }
//             if(skills[i].isCooling()&&skills[i].turn_counter>skills[i].CD()){
//                 cout<<skills[i].getSkill()<<" is now available!"<<endl;
//                 cout<<endl;
//                 skills[i].reset();

//             }
//         }
//     }
// }

void Player::takeDamage(int damage) {
    switch (damage) {
        case 1:
            cout << "but missed!"<<endl;
            break;
        case 2:case 3:case 4:
            cout << "however, the attack cases just a little damage."<<endl;
            cout<<"you have taken 1 point damage!"<<endl;
            current_hp-=1;
            break;
        case 5:case 6:case 7:
            cout << "it looks worked!"<<endl;
            cout<<"you have taken 2 point damage!"<<endl;
            current_hp-=2;
            break;
        case 8:case 9:
            cout << "a impressive strike!"<<endl;
            cout<<"you have taken 3 point damage!"<<endl;
            current_hp-=3;
            break;
        case 10:
            cout<<"critical strike!"<<endl;
            cout<<"you have taken 4 point damage!"<<endl;
            current_hp-=4;
            break;
    }
}