#ifndef CHARACTER_H
#define CHARACTER_H


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
            string  iname    = "Not Defined", 
            int     ihealth  = 0, 
            int     iattack  = 0, 
            int     iluck    = 0,
            int     ispeed   = 0,
            int     idefense = 0):name(iname),health(ihealth),attack_strenght(iattack),luck(iluck),defense(idefense){};

        void attr();

};

#endif