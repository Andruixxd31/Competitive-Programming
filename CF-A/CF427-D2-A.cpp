#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num;
    int cA = 0, cR = 0;
    cin >> n;
    for (int i; i < n; ++i)
    {
        cin >> num;
        if (num > 0)
            cA += num;
        else
        {
            if (cA + num < 0)
                ++cR;
            else
                --cA;
        }
    }
    cout << cR << endl;
}

// 46 ms	3600 KB
