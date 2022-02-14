// INCLUDATIONS
#include <iostream>
#include <string>
#include <windows.h>
#include <gtk.h>
#include <conio.h>
#include "game/difficulty.hpp"
#include "game/game.hpp"
#include "beatbox.mp3"
// Namespace
using namespace std;
string clear;
string howyouvebeen;


int main(int argc, char* argv[]){
cout << "Yo, how have you been?\n";
cin >> howyouvebeen;
if (howyouvebeen == "great"){
    cout << "It's good that you feel great\n";
    return 0;
}

else if (howyouvebeen == "good"){
   cout << "It's great that you feel good \n";
   return 0;
}

else{
    cout << "feels bad man";
    return 0;
}

return 0;
}
