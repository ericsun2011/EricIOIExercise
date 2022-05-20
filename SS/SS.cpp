#include <iostream>
using namespace std;

int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sortedSelection.out", "w", stdout);

    int min, cur, n, x = 0;
    int data[200];
    int count = 0; 
    while(scanf("%d", &data[count++]) == 1);

    // cout << data.size();
    count--;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (data[i] > data[j])
            {
                x = data[i];
                data[i] = data[j];
                data[j] = x;
            }
        }
        cout << data[i] << endl;
    }

    
    fclose(stdin);
    fclose(stdout);
    return 0;
}