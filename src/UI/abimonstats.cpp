#include <iostream>
#include "ui.h"
#include "profile.h"
using namespace std;

void abimonstat() {
    UserProfile userprofile;
    cout << "                                            \n";
    cout << "============================================\n";
    cout << "==============Your Abimon Stat==============\n";
    cout << "============================================\n";
    cout << "                                            \n";
    cout << "Abimon's name: ";
    userprofile.sebutnamaabimon();
    cout << "                                            \n";
    cout << "Are you ready to proceed to your first      \n";
    cout << "ABIMON Battle? (Y/N)                        \n";
    cout << "- ";
}
