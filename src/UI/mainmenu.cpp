#include <iostream>
#include "ui.h"
using namespace std;

void mainmenu::mainmenuUI() {
    cout << "\n";
    cout << "--- Welcome, adventurer! ---\n";
    cout << "1. Play game\n";
    cout << "2. Exit\n\n";

    cout << "Where'd you wanna go? ";
    cin  >> main_menu;

    if(main_menu == 1) {
        cout << "entering..";
    }
    else if(main_menu == 2) {
        cout << "exiting..";
    }
    else {
        while(main_menu != 1 && main_menu != 2) {
            cout << "Try again, where'd you wanna go? ";
            cin  >> main_menu;
        }
        if(main_menu == 1) {
            cout << "entering..";
        }
        else if(main_menu == 2) {
            cout << "exiting..";
        }
    }
}

int mainmenu::getmainmenuvalue() {
    return main_menu;
}
