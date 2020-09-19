#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a = 0, d = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arr[i] == 'A' ? ++a : ++d;
    }
    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}

// 31 ms	3700 KB