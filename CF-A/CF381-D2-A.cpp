#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a = 0, b = 0;

    cin >> n;
    int st = 0;
    int fn = n - 1;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[st] >= arr[fn])
        {
            if (i % 2 == 0)
                a += arr[st];
            else
                b += arr[st];
            ++st;
        }
        else
        {
            if (i % 2 == 0)
                a += arr[fn];
            else
                b += arr[fn];
            --fn;
        }
    }
    cout << a << " " << b;
}

// 31 ms	3600 KB