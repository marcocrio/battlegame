#include <iostream>
using namespace std;

#include "../character.h"

void Character::attr(){
    cout    << name 
            << " " 
            << health
            << " " 
            << attack_strenght
            << " " 
            << luck
            << " " 
            << speed
            << " " 
            << defense
            << endl;
            
}