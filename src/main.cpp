#include <iostream>
#include "ui.h"
using namespace std;

int main() {
    mainmenu MainMenu;
    banner();
    MainMenu.mainmenuUI();
    int mainmenuvalue = MainMenu.getmainmenuvalue();

    if (mainmenuvalue == 1) {

    }
    return 0;
}
