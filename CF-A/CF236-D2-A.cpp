#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> s1;
    string w;
    cin >> w;
    for (int i = 0; i < w.length(); i++)
        s1.insert(w[i]);

    s1.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}

// 62 ms	3800 KB