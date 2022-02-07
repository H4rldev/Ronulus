#include <iostream>
using namespace std;

void expert(){
    // expert goes here obviously.
  cout << "yoo you found easteregg"; //placeholder text so that it's not an empty function since the story isn't made yet.
}

void hard(){
   // hard difficulty
   cout << "ballas"; //placeholder text so that it's not an empty function since the story isn't made yet.
}

void medium(){
   // medium difficulty
   cout << "booba"; //placeholder text so that it's not an empty function since the story isn't made yet.
}

void easy(){
   // easy difficulty
   cout << "text"; //placeholder text so that it's not an empty function since the story isn't made yet.
}

int Difficulty;
int Secret;
int Youstupid;
const int Hard1 = 3;
const int Medium1 = 2;
const int Easy1 = 1;
const int Expert1 = 26;
const int Expert2 = 8;


void selection(){
cout << "Choose difficulty:\n";
cout << "(1) Easy \n" << "(2) Medium \n" << "(3) Hard\n";
cout << "Answer: ";
cin >> Difficulty;

// The Choice between difficulties
switch(Difficulty){

   case Hard1:
       system("cls");
       hard();
       system("pause");
       break;

   case Medium1:
       system("cls");
       medium();
       system("pause");
       break;

   case Easy1:
       system("cls");
       easy();
       system("pause");
       break;

// Secrets
   case Expert1:
       system("cls");
       cout << "Secret code recieved. \n";
       cout << "Input the second secret to proceed. \n";
       cout << "Input: ";
       cin >> Secret;
       if (Secret = Expert2){
          cout << "Last question.\n";
          cout << "What's 9 + 10?\n";
          cin >> Youstupid;
          if (Youstupid == 21){
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
   case Expert2:
       system("cls");
       cout << "Secret code recieved. \n";
       cout << "Input the second secret to proceed. \n";
       cout << "Input: ";
       cin >> Secret;
       if (Secret = Expert1){
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
          return selection();
       }

// Where idiots land.
   default:
       system("cls");
       cout << "Incorrect Difficulty";
       system("pause");
       return selection();
}
}
