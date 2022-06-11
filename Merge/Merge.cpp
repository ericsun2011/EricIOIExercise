#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int left = m - l + 1;
    int right = r - m;
    int *arr1 = new int[left];
    int *arr2 = new int[right];
    memcpy(arr1, arr + left, left * sizeof(int));
    memcpy(arr2, arr + m + 1, right * sizeof(int));
    int pointer1 = 0;
    int pointer2 = 0;
    int i = l;
    while (pointer1 < left && pointer2 < right)
    {
        if (arr1[pointer1] < arr2[pointer2])
        {
            arr[i++] = arr1[pointer1++];
        }
        else
        {
            arr[i++] = arr2[pointer2++];
        }
    }
    while (pointer1 < left)
    {
        arr[i++] = arr1[pointer1++];
    }
    while (pointer2 < right)
    {
        arr[i++] = arr2[pointer2++];
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int middle = start + (end - start) / 2;
    mergeSort(arr, start, middle);
    mergeSort(arr, middle + 1, end);
    merge(arr, start, middle, end);
}
int main()
{
    freopen("sort.in", "r", stdin);
    freopen("sortedMerge.out", "w", stdout);
    int count = 0;
    int data[200];
    while (scanf("%d", data + count) == 1)
        count++;
    mergeSort(data, 0, count - 1);
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << endl;
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}