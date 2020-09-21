#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string w;
    int suma = 0;
    cin >> w;
    w = 'a' + w;
    for (int i = 1; i < w.length(); ++i)
    {
        suma += min(abs(w.at(i) - w.at(i - 1)), 26 - abs(w.at(i) - w.at(i - 1)));
    }
    cout << suma;
}

// 31 ms	3900 KB
