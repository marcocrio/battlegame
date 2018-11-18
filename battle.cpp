
#include <iostream>

class Character {
    private:
        string  name;
        int     health;
        int     attack_strenght;
        int     luck;
        int     speed;
        int     defense;
    
    public:
        Character(
            string  iname    = "Not defined", 
            int     ihealth  = "Not defined", 
            int     iattack  = "Not defined", 
            int     iluck    = "Not defined",
            int     ispeed   = "Not defined",
            int     idefense = "Not defined"):name(iname),health(ihealth),attack_strenght(iattack),luck(iluck),defense(idefense);

        void attr();

}


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
            
}


int main() {

    Character.marco("Marco", 1000,50,10,5,30);



    return;
}