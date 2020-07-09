#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    int count = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (tolower(a[i]) > tolower(b[i]))
        {
            ++count;
            break;
        }
        else if (tolower(a[i]) < tolower(b[i]))
        {
            --count;
            break;
        }
    }
    cout << count;

    return 0;
}
// 92 ms	3900 KB