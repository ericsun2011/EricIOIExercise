#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<8> x = 10, y =6;

    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;
    cout << (~x) << endl;
    cout << (x >> 2) << endl;
    cout << (x << 2) << endl;

    
    return 0;
}