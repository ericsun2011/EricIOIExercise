#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {

    string str;

    cout << "Enter a binary number(0 - 1): ";
    getline(cin, str);

    bitset<8> bit (str);

    cout << "Ones " << bit.count() << endl;
    cout << "Zeros " << bit.size() - bit.count();


    return 0;
}