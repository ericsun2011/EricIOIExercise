#include <iostream>
using namespace std;

int main() {

    int x, n;

    cout << "Enter a number between 0 - 20: ";
    cin >> n;

    for(int i = 1, k = 0; i <= n; i++, k = 0) {
        for(x = 1; x <= n - i; x++) {
            cout << " ";
        }
        while(k != 2 * i - 1){
            cout << "*";
            k++;
        }
        cout << "\n\r";
    }
    return 0;
}