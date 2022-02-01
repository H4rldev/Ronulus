#include <iostream>
#include <string>
#include "easy.hpp"
#include "hard.hpp"
#include "medium.hpp"
#include "expert.hpp"
#include "clear.hpp"
using namespace std;

int difficulty;
int secret;
const int hard1 = 3;
const int medium1 = 2;
const int easy1 = 1;
const int expert1 = 26;
const int expert2 = 8;

int main(){
cout << "Choose difficulty:\n";
cout << "(1) Easy \n" << "(2) Medium \n" << "(3) Hard\n";
cout << "Answer: ";
cin >> difficulty;
switch(difficulty){

   case hard1:
       clear();
       hard();
       break;

   case medium1:
       clear();
       medium();
       break;

   case easy1:
       clear();
       easy();
       break;

   case expert1:
       clear();
       cout << "Secret code recieved. \n";
       cout << "Input the second secret to proceed. \n";
       cout << "Input: ";
       cin >> secret;
       if (secret = expert2){
          clear();
          expert();
       }
       else {
          break;
       }

   default:
       break;
}

return 0;
}
