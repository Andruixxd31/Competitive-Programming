#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int dice = max(n, m);

    int win = 6 - dice + 1; //since tie is winning the +1 is requiered

    if (win % 6 == 0)
        cout << "1/1" << endl;
    else if (win % 2 == 0)
        cout << win / 2 << "/" << 3 << endl;
    else if (win % 3 == 0)
        cout << win / 3 << "/" << 2 << endl;
    else
        cout << win << "/" << 6 << endl;
}

// 62 ms	0 KB