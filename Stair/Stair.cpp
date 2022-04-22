#include <iostream>
using namespace std;

int main() {

    int n, x, a = 1, b = 2;

    cin >> n;

    x = n - 1 + n - 2;


    for(int i = 0; i < x; i++) {
            cout << a << ",";
    }

    cout << "Solutions: " << x << endl;


    return 0;
}