#include <iostream>
#include <fstream>
using namespace std;

#include "../.include/mainMenu.h"



void MainMenu::interaction(){
   string line;
    ifstream getText;

    getText.open(".resources/mainmenu.txt");

   if(!getText.is_open()){
       cerr << "File coulnt be opened" << endl;
       exit(1);
   }

    while(!getText.eof()){
        getline(getText,line);
        cout << line << endl;
    }
            
     getText.close();

};

int MainMenu::getData(){
    return 4;
};