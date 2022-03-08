#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    long long amplifier = 1;
    int n;
    const double PI = 3.14159265358;

    cout << "Enter a number from 2-10: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        amplifier *= 10;        // amplifier = amplifier * 10;
    }

    /*
    if (n == 2) {
        amplifier = 100;
    } else if (n == 3) {
        amplifier = 1000;
    } else if (n == 4) {
        amplifier = 10000;
    } else if (n == 5) {
        amplifier = 100000;
    } else if (n == 6) {
        amplifier = 1000000;
    } else if (n == 7) {
        amplifier = 10000000;
    } else if (n == 8) {
       amplifier = 100000000;
    } else if (n == 9) {
        amplifier = 1000000000;
    } else if (n == 10) {
      amplifier = 10000000000;                
    }
    */
    long double temp = roundl(PI * amplifier) / amplifier;

    cout.precision(n);
    cout << "Pi: " << fixed << temp << endl;

    return 0;
}
