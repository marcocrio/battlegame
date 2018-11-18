#include <iostream>
#include <string>
using namespace std;


#include "character.h"

Character::Character(
            string  iname    = "Not Defined", 
            int     ihealth  = 0, 
            int     iattack  = 0, 
            int     iluck    = 0,
            int     ispeed   = 0,
            int     idefense = 0):name(iname),health(ihealth),attack_strenght(iattack),luck(iluck),defense(idefense){};

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