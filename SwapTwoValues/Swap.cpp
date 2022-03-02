#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int a = 50, b = 1000, c;
    // Swap a and b
    c = a;
    a = b;
    b = c;

    cout << a << " " << b << " \n\r";
 

    // swap a & b, method 2
    a += b; // a = a + b
    b = a - b;
    a = a - b; // a -= b;
    printf("a = %d, b = %d\n\r", a, b);   

    return 0;
}