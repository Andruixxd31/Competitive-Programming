#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, h, f;
    int width = 0;

    cin >> n >> h;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        f > h ? width += 2 : ++width;
    }
    cout << width;
    return 0;
}
// 31 ms	3700 KB
