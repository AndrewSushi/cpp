#include <iostream>
#include <stdlib.h>
using namespace std;

void rps(){
    string choice;
    string choices[3] = {"ROCK", "PAPER", "SCISSORS"};

    int computerChoice = rand() % 3;

    while(1){
        cout << "ROCK, PAPER or SCISSORS?" << endl;
        cin >> choice;
        int isValid = 0;
        if(choice != "ROCK" && choice != "PAPER" && choice != "SCISSORS"){
            cout << "Invalid Choice" << endl;
            cout << endl;
        }else{
            isValid = 1;
        }
        if(isValid){
            break;
        }
    }
    string compChoice = choices[computerChoice];
    cout << "You chose " << choice << endl;
    cout << "The computer chose " << compChoice << endl;
    if(choice == compChoice){
        cout << "Tie game!" << endl;
    }else if(choice == "ROCK"){
        if(compChoice == "PAPER"){
            cout << "You lose!" << endl;
        }else{
            cout << "You win!" << endl;
        }
    }else if(choice == "PAPER"){
        if(compChoice == "SCISSORS"){
            cout << "You lose!" << endl;
        }else{
            cout << "You win!" << endl;
        }
    }else if(choice == "SCISSORS"){
        if(compChoice == "ROCK"){
            cout << "You lose!" << endl;
        }else{
            cout << "You win!" << endl;
        }
    }
    cout << endl;
}

int main(){
    rps();
    string playAgain;
    while(1){
        cout << "Play again?" << endl;
        cin >> playAgain;
        if(playAgain == "YES"){
            rps();
        }else{
            break;
        }
    }
    return 0;
}