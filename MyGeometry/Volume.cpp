#include <iostream>
using namespace std;

double cubed(double sides);

int main() {

    double sides;
    double volume;

    cout << "Enter a size for the sides: ";
    cin >> sides;
    volume = cubed(sides);
    cout << "Volume is: " << volume << endl;

    return 0;
}

double cubed(double sides){
    double volume = sides * sides * sides;
    return volume;
}