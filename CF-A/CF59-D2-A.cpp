#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int u = 0, l = 0;
    string w;
    cin >> w;
    for (int i = 0; i < w.length(); i++)
    {
        if (islower(w[i]))
            ++l;
        else
            ++u;
    }
    if (l >= u)
    {
        for (int i = 0; i < w.length(); i++)
            w[i] = tolower(w[i]);
    }
    else
    {
        for (int i = 0; i < w.length(); i++)
            w[i] = toupper(w[i]);
    }

    cout << w;

    return 0;
}

// 62 ms	3600 KB