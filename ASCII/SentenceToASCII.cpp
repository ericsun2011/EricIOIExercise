#include <iostream>
#include <string>
using namespace std;

int main() {

    char ASCII;
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    for(char ch : sentence) {
        printf("%d ", (int)ch);
    }
    
    return 0;
}