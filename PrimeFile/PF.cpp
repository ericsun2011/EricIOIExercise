#include <iostream>
using namespace std;

bool isPrime(int x);
int main()
{

    freopen("data31.in", "r", stdin);
    freopen("answer31.out", "w", stdout);

    int x;

    while (scanf("%d", &x) == 1)
    {
        if (isPrime(x))
        {
            cout << x << " is a prime number" << endl;
        }
        else
        {
            cout << x << " is not a prime number" << endl;
        }
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}

bool isPrime(int x)
{
    bool prime = true;
    if (x == 0 || x == 1)
    {
        prime = false;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}