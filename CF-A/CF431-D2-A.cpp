#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int suma = 0;
    string w;
    string num;
    unordered_map<int, int> map;

    for (int i = 1; i <= 4; i++)
    {
        cin >> num;
        map[i] = stoi(num);
    }
    cin >> w;

    for (int i = 0; i < w.length(); i++)
    {
        suma += map.at((int)w[i] - 48);
    }

    cout << suma << endl;
}

// 31 ms	3900 KB
