#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string w;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> w;
        if (w.length() <= 10)
            cout << w << "\n";
        else
            cout << w[0] << w.length() - 2 << w.back() << "\n";
    }
}

// 31 ms 200 KB
