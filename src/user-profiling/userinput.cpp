#include <iostream>
#include "profile.h"
using namespace std;

void UserProfile::intro() {
    cout << "                                            \n";
    cout << "============================================\n";
    cout << "===========Choose Your Character!===========\n";
    cout << "============================================\n";
    cout << "                                            \n";
    cout << "Narrator: After some gachas, god finally    \n";
    cout << "          gave you the chance to born and   \n";
    cout << "          live in a TREMENDOUS WORLD full   \n";
    cout << "          of Abimon.                        \n";
    cout << "                                            \n";
    cout << "You: Hello! My name is.. (type your name)   \n";
    cout << "- ";
    cin >> username;
    cout << "\n";
    cout << username << ": My mom bought me an ABIMON.   \n";
    cout << username << ": Its name is.. (type your abimon's name)   \n";
    cout << "- ";
    cin >> userabimon;
}
