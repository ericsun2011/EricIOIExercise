#include <iostream>
using namespace std;

int main()
{

    int a = 2, b = 5, c = 0, d = 0;
    const int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for (int i = 11; i <= 91; i += 10)
    {
        for (int j = 0; j <= 14; j++)
        {
            if (i % prime[j] == 0)
            {
                c = prime[j];
                d = i / c;
                for (int k = 0; k <= 14; k++)
                {
                    if (d == prime[k])
                    {
                        printf("%d + %d + %d + %d = %d\n", a, b, c, d, a + b + c + d);
                    }
                }
            }
        }
    }

    return 0;
}