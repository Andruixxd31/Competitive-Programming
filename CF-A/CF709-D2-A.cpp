#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b, d, o;
    int cleanup = 0;
    int total = 0;
    cin >> n >> b >> d;

    for (int i = 0; i < n; ++i)
    {
        cin >> o;
        if (o <= b)
        {
            total += o;
            if (total > d)
            {
                cleanup++;
                total = 0;
            }
        }
    }

    cout << cleanup;
}

// 46 ms	0 KB