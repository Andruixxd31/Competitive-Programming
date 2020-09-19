#include <iostream>
#include <map>
#include <string>
using namespace std;

int check_key(map<int, int> m, int key);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int color;
    map<int, int> colors;
    int rep = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n * 2; ++i)
    {
        cin >> color;
        if (i % 2 == 0)
        {
            ++colors[color];
            // cout << "val of " << color << " is " << colors.at(color) << endl;
        }
        else
        {
            arr[i / 2] = color;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (check_key(colors, arr[i]) == 1)
        {
            rep += colors.at(arr[i]);
        }
    }

    cout << rep;
}

int check_key(map<int, int> m, int key)
{
    // Key is not present
    if (m.find(key) == m.end())
        return 0;
    return 1;
}

// 62 ms	200 KB