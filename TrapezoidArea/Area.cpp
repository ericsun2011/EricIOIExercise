#include <iostream>
using namespace std;

int main() {

    const double a = 15, b = 25, A = 150;
    double h, TrapezoidArea;

    h = (2 * a) / b;
    TrapezoidArea = (a + b) / 2 * h;
    cout << TrapezoidArea << " CM squared";

    return 0;
}