#include <iostream>
using namespace std;

int main() {

    freopen("data31.in", "r", stdin);
    freopen("answer31.out", "w", stdout);

    int x;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> x;

    if(x == 0 || x == 1) {
        prime = false;
    }

    for(int i = 2; i <= x/2; i++) {
        if(x % i == 0) {
            prime = false;
            break;
        }
    }
    if(prime = true){
        cout << x << " is a prime number";
    }
    else{
        cout << x << " is not a prime number";
    }

    fclose(stdin);
    fclose(stdout);
    
    return 0;
}