#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
int main()
{

    int n, i;

    cin >> n;

    while (i < n)
    {
        i++;
    }
    cout << fibonacci(i);

    return 0;
}