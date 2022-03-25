#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1;
    string str2;
    

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    getline(cin, str2);

    int compare1 = str1.compare(str2);
    int compare2;

    if(str1.length() == str2.length()){
        compare2 = 0;
    }
    else if(str1.length() > str2.length()){
        compare2 = 1;
    }
    else {
        compare2 = -1;
    }

    if(compare1 == 0 && compare2 == 0) {
        cout << "0xFF";
    }
    else if(compare1 > 0 && compare2 > 0) {
        cout << "0x11";
    }
    else if(compare1 > 0 && compare2 < 0) {
        cout << "0x10";
    }
    else if(compare1 < 0 && compare2 > 0) {
        cout << "0x01";
    }
    else{
        cout << "0x00";
    }

    return 0;
}