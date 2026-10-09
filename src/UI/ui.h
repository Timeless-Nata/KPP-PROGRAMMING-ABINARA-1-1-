#pragma once

void banner();
void abimonstat();

class mainmenu {
    private:
        int main_menu;
    public:
        int pilihanuser();
        void mainmenuUI();
        int getmainmenuvalue();
};
