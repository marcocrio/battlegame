#include <iostream>
#include <string>
using namespace std;

#include ".include/mainMenu.h"
#include ".include/character.h"

int main() {

    Character marco("marco",1000,43,12,34,23);

    marco.attr();

    MainMenu elmenu();

    cout << elmenu.getData() << endl;
 


    return EXIT_SUCCESS;
}