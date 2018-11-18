#include <iostream>
#include <fstream>
using namespace std;

#include "../.include/main_menu.h"

void Menu::interaction(){
   string line;
    ifstream getText;

    getText.open("../.resources/mainmenu.txt");

   if(!getText.is_open()){
       cout << EXIT_FAILURE;
       exit(1);
   }

    while(!getText.eof()){
        getline(getText,line);
        cout << line << endl;
    }
            
     getText.close();

}