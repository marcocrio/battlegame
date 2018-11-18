#include <iostream>
#include <fstream>
using namespace std;

#include "../.include/mainMenu.h"

MainMenu::MainMenu(){};


void MainMenu::interaction(){
   string line;
    ifstream getText;

    getText.open("../.resources/mainmenu.txt");

   if(!getText.is_open()){
       cout << EXIT_FAILURE;
       exit(1);
   }

    cout << "hi" << endl;
    while(!getText.eof()){
        getline(getText,line);
        cout << line << endl;
    }
            
     getText.close();

};

int MainMenu::getData(){
    return 4;
};