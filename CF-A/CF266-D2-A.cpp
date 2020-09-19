#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string rocks;
    int count = 0;
    stack<char> s;
    cin >> n;
    cin >> rocks;
    for (int i = 0; i < rocks.length(); i++)
    {

        if (s.empty())
            s.push(rocks.at(i));
        else if (rocks.at(i) != s.top())
            s.push(rocks.at(i));
        else
            ++count;
    }
    cout << count << endl;
}

//62 ms	3700 KB