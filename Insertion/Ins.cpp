#include <iostream>
using namespace std;
int x = 0;
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (int i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            x++;
        }
        arr[j + 1] = k;
    }
}
int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sortedInsertion.out", "w", stdout);
    int c = 0;
    int min, cur, n;
    int data[200];
    int count = 0;
    while (scanf("%d", &data[count++]) == 1)
        ;
    count--;
    insertionSort(data, count);
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << endl;
    }
    cout << x;
    fclose(stdin);
    fclose(stdout);
    return 0;
}