#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string stones;
    string ins;
    cin >> stones >> ins;

    int pos = 0;
    for (int i = 0; i < ins.length(); ++i)
        if (ins.at(i) == stones.at(pos))
            ++pos;
    cout << pos + 1;
}

// 60 ms	0 KB