#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    unsigned long long ic;
    int dp = 0;
    char s;
    unsigned long long num;

    cin >> n >> ic;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> num;
        if (s == '+')
            ic += num;
        else
            ic >= num ? ic -= num : ++dp;
    }
    cout << ic << " " << dp;
}

// 31 ms 200 KB
