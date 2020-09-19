#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, b;
    int y = 0;
    cin >> l >> b;
    while (l <= b)
    {
        l *= 3;
        b *= 2;
        ++y;
    }
    cout << y;
}

// 31 ms	3600 KB