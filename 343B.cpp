#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string w;
    stack<char> s;
    cin >> w;
    for (int i = 0; i < w.length(); i++)
    {
        if (s.size() == 0)
        {
            s.push(w[i]);
        }
        else
        {
            if (w[i] == s.top())
            {
                s.pop();
            }
            else
            {
                s.push(w[i]);
            }
        }
    }
    s.size() == 0 ? cout << "YES" : cout << "NO";
}

// 62 ms	4000 KB