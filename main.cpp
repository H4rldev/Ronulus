// INCLUDATIONS
#include <iostream>
#include <string>
// #include <conio.h> - plans
#include "easy.hpp"
#include "hard.hpp"
#include "medium.hpp"
#include "expert.hpp"

// Namespace
using namespace std;

// Variables and things
int difficulty;
int secret;
int youstupid;
const int hard1 = 3;
const int medium1 = 2;
const int easy1 = 1;
const int expert1 = 26;
const int expert2 = 8;
string clear;

int main(){
cout << "Choose difficulty:\n";
cout << "(1) Easy \n" << "(2) Medium \n" << "(3) Hard\n";
cout << "Answer: ";
cin >> difficulty;

// The Choice between difficulties
switch(difficulty){

   case hard1:
       system("cls");
       hard();
       system("pause");
       break;

   case medium1:
       system("cls");
       medium();
       system("pause");
       break;

   case easy1:
       system("cls");
       easy();
       system("pause");
       break;

// Secrets
   case expert1:
       system("cls");
       cout << "Secret code recieved. \n";
       cout << "Input the second secret to proceed. \n";
       cout << "Input: ";
       cin >> secret;
       if (secret = expert2){
          cout << "Last question.\n";
          cout << "What's 9 + 10?\n";
          cin >> youstupid;
          if (youstupid == 21){
             system("cls");
             cout << "Woo you're not stupid. Here have your dumb expert mode.";
             expert();
             system("pause");
             break;
          }
       }
       else {
          system("cls");
          cout << "Ok, bye";
          system("pause");
          break;
       }
   case expert2:
       system("cls");
       cout << "Secret code recieved. \n";
       cout << "Input the second secret to proceed. \n";
       cout << "Input: ";
       cin >> secret;
       if (secret = expert1){
          system("cls");
          cout << "Woo you're not stupid. Here have your dumb expert mode.";
          expert();
          system("pause");
          break;
          }
       else {
          system("cls");
          cout << "Ok, bye";
          system("pause");
          return main();
       }

// Where idiots land.
   default:
       system("cls");
       cout << "Incorrect Difficulty";
       system("pause");
       return main();
}

// Bye
return 0;
}
