#include <iostream>
using namespace std;

int main() {

    int x = 0;

 
    for(int r = 0; r <= 20; r++){
        for(int h = 0; h <= (100 - r * 5) / 3; h++){
            int c = 100 - r * 5 - h * 3;
            /* cout << r << " ";
            cout << h << " ";
            cout << c << endl; */
            printf("%d %d %d\n", r, h, c);
            x++;
        }
    }
    
    cout << x;
    
    return 0;
}