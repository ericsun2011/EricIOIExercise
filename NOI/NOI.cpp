#include <iostream>
using namespace std;

int main(){

    int x = 110, y = 90, a = 90, b = 210;

    

    double Rate = (b * y - a * x) / (b - a);
    printf("%0.2f \n", Rate);

    return 0;
}