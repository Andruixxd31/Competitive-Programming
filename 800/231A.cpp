#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
	int n = 0; 
	int problems = 0;
	int count;
	int votes[3];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		count = 0;
		for (int j = 0; j < 3; ++j)
		{
			cin >> votes[j];
			if(votes[j] == 1) {
				++count;
				if(count == 2) ++problems;
			}
		}
	}
	cout << problems;
	return 0;
}


// 62 ms	3700 KB