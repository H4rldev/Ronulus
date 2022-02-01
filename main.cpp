#include <iostream>
#include <string>
#include "difficulty/easy.cpp";
#include "difficulty/hard.cpp";
#include "difficulty/medium.cpp";
#include "difficulty/expert.cpp";
using namespace std;

string difficulty;

int main(){
cout << "Choose difficulty:\n";
cout << "1. Easy \n" << "2. Medium \n" << "3. Hard\n";
cout << "Answer:";
cin >> difficulty;

if (difficulty == "easy" or "1" or "Easy"){
   easy();
}
else {
   cout << "Please define a difficulty before proceeding..";
   return 0;
}

if (difficulty == "medium" or "2" or "Medium"){
    medium();
}
else {
   cout << "Please define a difficulty before proceeding..";
   return 0;
}

if (difficulty == "hard" or "3" or "Hard"){
   hard();
}
else {
   cout << "Please define a difficulty before proceeding..";
   return 0;
}

if (difficulty == "H4rl" or "Zoter" or "h4rl" or "zoter" or "harl" or "hurl" or "zote"){
   expert();
}
else {
   cout << "Please define a difficulty before proceeding..";
   return 0;
}

return 0;
}
