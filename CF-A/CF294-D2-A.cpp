#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int wires, shots, x, y;
    cin >> wires;
    int birds[wires];
    for (int i = 0; i < wires; ++i)
    {
        cin >> birds[i];
    }

    cin >> shots;

    for (int i = 0; i < shots; ++i)
    {
        cin >> x >> y;
        x -= 1;
        if (x == 0)
        {
            birds[x + 1] += birds[x] - y;
        }
        else if (x == wires - 1)
        {
            birds[x - 1] += birds[x] - (birds[x] - y) - 1;
        }
        else
        {
            birds[x - 1] += birds[x] - (birds[x] - y) - 1;
            birds[x + 1] += birds[x] - y;
        }
        birds[x] = 0;
    }

    for (int i = 0; i < wires; ++i)
        cout << birds[i] << "\n";
}

// 62 ms	0 KB