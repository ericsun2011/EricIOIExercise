#include <iostream>
using namespace std;

double FeetToMeter(const double feet);

int main() {
    
    double meter;
    double feet;
    cout << "Enter an amount of feet: ";
    cin >> feet;
    meter = FeetToMeter(feet);
    cout << "# of meters is: " << meter << endl;


    return 0;
}

double FeetToMeter(const double feet) {
    double meter = feet/3.28;
    return meter;
}