#include <iostream>
#include <string>
using namespace std;

int isvowel(int _c);

int main() {

    freopen("text.in", "r", stdin);
    freopen("result.out", "w", stdout);

    string str;
    int abc = 0;
    int vowels = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(char ch : str){
        if(isalpha(ch)) {
            abc++;
            
            if(isvowel(tolower(ch))) vowels++;
        }
    }

    cout << "Letters of the alphabet: " << abc;
    cout << "# of vowels: " << vowels;

    fclose(stdin);
    fclose(stdout);

    return 0;
}

int isvowel(int _c) {
    const char vowels[] = "aeiou";

    for(char ch : vowels) {
        if(_c == ch) return 1;
    }
    return 0;
}

