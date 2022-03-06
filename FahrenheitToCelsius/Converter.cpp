#include <iostream>
using namespace std;

double FahrenheitToCelcius(const double fahrenheit);

int main() {
    
    double fahrenheit;
    double celcius;

    cout << "Enter an amount of Fahrenheit: ";
    cin >> fahrenheit;
    celcius = FahrenheitToCelcius(fahrenheit);
    cout << "# of Celcius is: " << celcius << endl;



    return 0;

}

double FahrenheitToCelcius(const double fahrenheit) {
    double celcius = (fahrenheit - 32) * 5 / 9;
    return celcius;
}