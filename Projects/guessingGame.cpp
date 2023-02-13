#include <iostream>
#include <ctime>
using namespace std;

void guessingGame(){
    int guesses = 0;
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;

    cout << "The goal of this game is to guess the number between 1 and 100!" << endl;
    while(1){
        cout << "Current Guesses: " << guesses << endl;
        cout << "Guess a number between 1 and 100:" << endl;
        cin >> guess;
        if(guess == number){
            cout << "Correct! It took " << guesses << endl;
            return;
        }else if(guess < number){
            cout << "Incorrect! The number is higher!" << endl;
            cout << endl;
            guesses++;
        }else{
            cout << "Incorrect! The number is lower!" << endl;
            cout << endl;
            guesses++;
        }
    }
}

int main(){
    guessingGame();
    return 0;
}