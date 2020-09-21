#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string st;
    set<char> letters;
    getline(cin, st);
    for (int i = 0; i < st.length(); i++)
        if (isalpha(st.at(i)))
            letters.insert(st.at(i));
    cout << letters.size();
}

// 46 ms	200 KB