#include <iostream>
using namespace std;

int main() {

    int x = 0;

    for(int i = 1; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                if(i * i * i + j * j * j + k * k * k == i * 100 + j * 10 + k){
                    x++;
                    cout << i;
                    cout << j;
                    cout << k << endl;
                }
            }
        }
    }

    cout << x;

    return 0;
}