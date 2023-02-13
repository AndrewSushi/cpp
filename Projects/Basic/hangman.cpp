#include <iostream>
#include <ctime>
using namespace std;

string words[21] = {"queen","apathy","puzzlement","trademark","sickle","galaxy","depth","sophomore","buccaneer","ironic","flutter","descendant","figment","copyright","observatory","interject","feeling","blacksmith","companion","hobby","mortified"};

int containsChar(string str, char c){
    for(int i = 0; i < str.length(); i++){
        if(c == str[i]){
            return 1;
        }
    }
    return 0;
}

void hangman(){
    srand(time(0));
    int idx = rand() % 21;
    string word = words[idx];
    int lives = 8;
    string guessedChars;
    string alphabet = "qwertyuiopasdfghjklzxcvbnm";
    char guess;
    int len = word.length();
    string dashedWord(len, '-');


    cout << "The goal of this game is to guess letters to complete the word!" << endl;
    cout << "Be careful though, you only have 5 incorrect guesses!" << endl;
    while(lives != 0){
        while(1){
            cout << "Current lives: " << lives << endl;
            cout << dashedWord << endl;
            cout << "Guessed letters: " << guessedChars << endl;
            cout << "Guess a letter:" << endl;
            guess = getchar();
            if(guess < 97){
                guess += 32;
            }
            if(sizeof(guess) > 1){
                cout << "Only enter one letter!" << endl;
            }else if(containsChar(guessedChars, guess)){
                cout << "Already guessed this letter!" << endl;
            }else if(containsChar(alphabet, guess) == 0){
                cout << "Invalid input!" << endl;
            }else{
                break;
            }
        }
        if(containsChar(word, guess)){
            for(int i = 0; i < word.length(); i++){
                if(word[i] == guess){
                    dashedWord[i] = guess;
                }
            }
        }else{
            cout << "Letter not in word!" << endl;
            lives--;
        }
        guessedChars += guess;
        if(containsChar(dashedWord, '-') == 0){
            cout << "You won!\nThe word is: " << word << endl;
            return;
        }
    }
    cout << "The word was: " << word << endl;
}

int main(){
    hangman();
    return 0;
}