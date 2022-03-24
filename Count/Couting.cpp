#include <iostream>
#include <string>
using namespace std;


int main() {

    string str;
    int alphabet = 0, num = 0, SpCh = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if(str.at(i) >= 'a' && str.at(i) <= 'z') {
            alphabet++;
        }
        else if(str.at(i) >= 'A' && str.at(i) <= 'Z') {
            alphabet++;
        }
        else if(str.at(i) >= '0' && str.at(i)<= '9') {
            num++;
        }
        else{
            SpCh++;
        }
    }
    cout << "Letters: " << alphabet << endl;
    cout << "Numbers: " << num << endl;
    cout << "Others: " << SpCh << endl;

    return 0;
}