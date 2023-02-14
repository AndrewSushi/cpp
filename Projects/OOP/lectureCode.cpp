#include <iostream>
#include <vector>
using namespace std;

int main(){
    string a;
    a = "Hello World";
    cout << a << endl;
    vector<std::string> strs;
    strs.resize(3);

    strs.push_back("a");
    strs.push_back("b");
    strs.push_back("c");

    cout << strs[1] << endl;

    return 0;
}