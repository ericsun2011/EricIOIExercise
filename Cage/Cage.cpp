#include <iostream>
using namespace std;

int main()
{

    freopen("data.in", "r", stdin);
    freopen("answer.out", "w", stdout);

    int c = 0, r = 0, h, f;

    while (scanf("%d %d", &h, &f) == 2)
    {

        c = (h * 4 - f) / 2;
        r = h - c;

        cout << c << " " << r << endl;
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
