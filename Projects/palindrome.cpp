#include <iostream>
using namespace std;

int strLength(char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

int isPalindrome(char *str){
    int i = 0;
    int len = strLength(str);
    while(i < (len - i - 1)){
        if(str[i] != str[len - i - 1]){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    cout << isPalindrome("Andrew") << endl;
    cout << isPalindrome("racecar") << endl;
    return 0;
}