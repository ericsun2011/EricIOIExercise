#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = ("There are two needles in this haystack with needles.");
    string str1 = ("needle");
    string str2 = ("haystack");
    size_t find = str.find(str1);

    cout << "First 'needle' is found at: " << find << endl;

    find = str.find("needles are small", find+1 , 6);

    cout << "Second 'needle' is found at: " << find << endl;

    find = str.find(str2);

    cout << "'Haystack' is found at: " << find << endl;

    str.replace(str.find(str1), str1.length(), "preposition");

    cout << str;

 
    return 0;
}