#include <iostream>
using namespace std;
void quickSort(int input[], int start, int end);
int partition(int input[], int start, int end);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

void quickSort(int input[], int start, int end)
{
    if (end - start <= 1)
        return;

    int pivotIndex = partition(input, start, end);

    quickSort(input, start, pivotIndex);
    quickSort(input, pivotIndex + 1, end);
}

int partition(int input[], int start, int end)
{
    int pivot = input[start];
    int i = start;
    int j = end;
    while (i < j)
    {
        while (i < j && input[--j] >= pivot)
            ;
        if (i < j)
        {
            input[i] = input[j];
        }
        while (i < j && input[++i] <= pivot)
            ;
        if (i < j)
        {
            input[j] = input[i];
        }
    }

    input[j] = pivot;
    return j;
}

// 31 ms	3700 KB