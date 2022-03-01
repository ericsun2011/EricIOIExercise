#include <iostream>
#include <math.h>       /* round, floor, ceil, trunc */

using namespace std;

int main() {

float x;
float y;

cout << "Enter a number: \n\r";
cin >> x;
cout << "Enter another number: \n\r";
cin >> y;
cout << "Sum of "<< x << " + " << y << " = " << round((x + y) * 100) / 100;

return 0;
}