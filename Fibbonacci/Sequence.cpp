#include <iostream>
using namespace std;

int main()
{

    int x = 0, y = 1, z, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            z = i;
        }
        else if (x + y <= n)
        {
            z = x + y;
            x = y;
            y = z;
        }
        else
        {
            break;
        }
        cout << z << " ";
    }

    return 0;
}