#include <iostream>
using namespace std;

double cubed(double CubeSides);
double sphere(double SphereR);
double cylinder(double CylR, double CylH);

int main() {
    int menu;
    double CubeSides;
    double CubeVolume;
    double SphereR;
    double SphereVolume;
    double CylR;
    double CylH;
    double CylVolume;

    while(1) {  
        cout << "Enter a number from 1-4 (1 = cube, 2 = sphere, 3 = cylinder, 4 = quit): ";
        cin >> menu;

        if (menu == 1) {
            cout << "Enter a size for the sides: ";
            cin >> CubeSides;
            CubeVolume = cubed(CubeSides);
            cout << "Volume for the cube is: " << CubeVolume << endl;
        } else if (menu == 2) {
            cout << "Enter radius for sphere: ";
            cin >> SphereR;
            SphereVolume = sphere(SphereR);
            cout << "Volume for the sphere is: " << SphereVolume << endl;
        } else if (menu == 3) {
            cout << "Enter radius for cylinder: ";
            cin >> CylR;
            cout << "Enter height for cylinder: ";
            cin >> CylH;
            CylVolume = cylinder(CylR, CylH);
            cout << "Volume for the cylinder is: " << CylVolume << endl;
        } else {
            cout << "Goodbye Byte.";
            exit(0);
        }    
    }
    return 0;
}

double cubed(double CubeSides){
    double CubeVolume = CubeSides * CubeSides * CubeSides;
    return CubeVolume;
}

double sphere(double SphereR){
    double x = 4, y = 3;
    double SphereVolume = (x / y) * 3.14159 * SphereR * SphereR * SphereR;
    return SphereVolume;
}

double cylinder(double CylR, double CylH){
    double CylVolume = 3.14159 * CylR * CylR * CylH;
    return CylVolume;
}