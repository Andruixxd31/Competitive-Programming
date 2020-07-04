#include <iostream>
#include <strings.h>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	char players[100];
	int a = 0;
	int b = 0;
	cin >> players;

	for (int i = 0; i < strlen(players); ++i)
	{
		if (players[i] == '1'){
			++a;
			b = 0;
			if(a >= 7){
				cout << "YES";
				return 0;
			}
		} else {
			++b;
			a = 0;
			if(b >= 7){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}

// 62 ms	200 KB