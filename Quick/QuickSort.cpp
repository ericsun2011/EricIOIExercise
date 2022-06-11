#include <iostream>
using namespace std;
int h = 0;
void swap(int *i, int *j)
{
    int x = 0;
    x = *i;
    *i = *j;
    *j = x;
    h++;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
void quick(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick(arr, low, pi - 1);
        quick(arr, pi + 1, high);
    }
}
int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sortedQuick.out", "w", stdout);
    int data[200];
    int count = 0;
    while (scanf("%d", data + count) == 1)
        count++;
    quick(data, 0, count - 1);
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << endl;
    }
    cout << h;
    return 0;
}