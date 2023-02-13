#include <iostream>
using namespace std;

double mToKm(int m){
    return m / 1000.0;
}

double inToFt(int i){
    return i / 12.0;
}

int main(){
    cout << mToKm(2000) << endl;
    cout << mToKm(500) << endl;
    cout << inToFt(12) << endl;
    cout << inToFt(16) << endl;
    return 0;
}