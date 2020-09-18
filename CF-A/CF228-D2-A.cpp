#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int color;
    set<int> shoes;
    for (int i = 0; i < 4; ++i)
    {
        cin >> color;
        shoes.insert(color);
    }
    cout << 4 - shoes.size();
}

// 62 ms	0 KB