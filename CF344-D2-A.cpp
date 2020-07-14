#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int mg;
    stack<int> s;
    cin >> n;
    cin >> mg;
    s.push(mg);
    for (int i = 1; i < n; i++)
    {
        cin >> mg;
        if (mg != s.top())
            s.push(mg);
    }
    cout << s.size();
}

// 92 ms	4200 KB