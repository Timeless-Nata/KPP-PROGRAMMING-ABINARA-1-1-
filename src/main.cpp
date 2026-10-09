#include <iostream>
#include "ui.h"
#include "profile.h"
using namespace std;

int main() {
    mainmenu MainMenu;
    UserProfile userprofile;
    banner();
    MainMenu.mainmenuUI();
    int mainmenuvalue = MainMenu.getmainmenuvalue();

    if (mainmenuvalue == 1)
        userprofile.intro();
        abimonstat();
    return 0;
}
