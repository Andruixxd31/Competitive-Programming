#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double n, t, k, d;
    cin >> n >> t >> k >> d;
    cout << ceil(n / k) * t << endl;
    cout << t + d << endl;
    ceil(n / k) * t > t + d ? cout << "YES" : cout << "NO";
}

// 31 ms	200 KB