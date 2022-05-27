#include <iostream>
#include <cstring>

using namespace std;

void reversWord(string word);

int main() {
    string str = "Hello Eric Sun ";

    /*cout << "Enter a string:  ";
    getline(cin, str);
*/
    reversWord(str);
    
    cout << endl;

    cout << "Words reversed: ";
    char preCh = ' ';
    string myword;
    int wordStartPos = 0;
    int wordSize = 0;
    for(int i = 0; i < str.length(); i++) {
        char ch = str.at(i);
        if(ch == ' ') {
        cout << ' ';
        if(preCh != ' ') {
                wordSize = i - wordStartPos;
                myword = str.substr(wordStartPos, wordSize);
                reversWord(myword);
    }
    } else {
        if(preCh == ' ') {
    wordStartPos = i;
    }
    }
    preCh = ch;
    }
    if(preCh != ' ') {
    cout << ' ';
    wordSize = str.length() - wordStartPos;
    myword = str.substr(wordStartPos, wordSize);
    reversWord(myword);
    }
    cout << endl;

    return 0;
}

void reversWord(string word) {
    for(int i = word.length() - 1; i >= 0; i--) {
     cout << word.at(i);
    }
}