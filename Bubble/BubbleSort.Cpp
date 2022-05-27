#include <iostream>
using namespace std;
int x = 0;
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                x++;
            }
        }
    }
}
int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sortedBubble.out", "w", stdout);
    
    int bubble[200];
    int count;

    while (scanf("%d", &bubble[count++]) == 1)
        ;

    count--;
    bubbleSort(bubble, count);
    for (int i = 0; i < count; i++)
    {
        cout << bubble[i] << endl;
    }
    cout << x;
    fclose(stdin);
    fclose(stdout);

    return 0;
}
