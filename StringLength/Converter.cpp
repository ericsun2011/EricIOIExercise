#include <iostream>
#include <string>
using namespace std;

int main() {

    int words = 0;
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << sentence.length() << "\n\r";

    char preCh = 0;
    for(char ch : sentence) {
        if(ch == ' '){
            if(preCh != ' ') {
                words++;
            }           
            preCh = ' ';
        } else {
            preCh = ch;
            if(ch >= 'a' && ch <= 'z') {
                // lower case -> upper case
                printf("%c", ch - 32);
                continue;
            } else if(ch >= 'A' && ch <= 'Z') {
                // upper case -> lower case
                printf("%c", ch + 32);
                continue;           
            }
        }
        cout << ch;
    }
    cout << "\n\r"<< (preCh == ' ' ? words : words + 1) << "\n\r";
    

    return 0;
}