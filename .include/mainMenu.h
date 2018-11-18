#ifndef MAINMENU_H
#define MAINMENU_H


class MainMenu {
    private:
        int a;
    public:
        MainMenu(int b=0):a(b){};

        void interaction();

        int getData();
};

#endif