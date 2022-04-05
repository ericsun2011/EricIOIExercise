#include <iostream>
using namespace std;

int main() {

    int SumLeft = 0;


    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < 10 - i; j++) {
                SumLeft++;

        }
    }
    
    cout << SumLeft;

    
    

    return 0;
}