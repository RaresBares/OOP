//
// Created by rasah_s2z0ncs on 14.02.2020.
//

#ifndef UNTITLED2_ENEMY_H
#define UNTITLED2_ENEMY_H


#include <xstring>

class Enemy {
private:

public:
    int life;
    int dmg;
    Enemy(size_t dmg,size_t  life){
        this->dmg = dmg;
        this->life = life;
    }
    std::string getInfo();

};


#endif //UNTITLED2_ENEMY_H
