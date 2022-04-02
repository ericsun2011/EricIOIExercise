#include <iostream>
using namespace std;

int main(){


    for(int x = 7;; x += 5) {
        if(x % 3 == 1 && x % 7 == 3) {
            cout << x;
            break;
        }
    }
    
    

    return 0;
}