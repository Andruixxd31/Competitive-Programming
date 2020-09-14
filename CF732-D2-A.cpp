#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, r;
    int i;
    cin >> k >> r;
    for (i = 1;; i++)
        if (k * i % 10 == 0 || (k * i - r) % 10 == 0)
            break;

    cout << i;
}

// 31 ms	0 KB