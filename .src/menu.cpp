#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

#include "../.include/menu.h"



void Menu::start(){
    char action;
    string line;

    ifstream getText;
    //Opens the start screen 
    getText.open(".resources/mainmenu.txt");
    //checks that file was oppened succesfully
   if(!getText.is_open()){
       cerr << "File coulnt be opened" << endl;
       exit(1);
   }
    //prints out welcome message
    while(!getText.eof()){
        getline(getText,line);
        cout << line << endl;
    }
            
    getText.close();

    //start menu selection
    cin >> action;
    //makes sure user selects any asked value
    while (action != 'l' && action!='L' && action!='N' && action!='n' && action!='e'&& action!='E'  ){
        cin >> action;
    };
    
    //
    if(action == 'l' || action  == 'L'){
        load(); 
    }else if(action == 'n' || action == 'N'){
        createchar();
    }else{
        exitgame();
    }


};


void Menu::load(){
    string character;
    cout << "Characters name:" << endl;
    cin >> character;
};

void Menu::exitgame(){
    exit(1);
}