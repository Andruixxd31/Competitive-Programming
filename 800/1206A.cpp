#include <iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int n = 0, m = 0, nElm = 0, mElm = 0;
	int i;
	int numA = 0, numB = 0;

	cin >> n; 
	for (i = 0; i < n; ++i)
	{
		cin >> nElm;
		if(numA < nElm)
				numA = nElm;
	}
	cin >> m;
	for (i = 0; i < m; ++i)
	{
		cin >> mElm;
		if(numB < mElm)
				numB = mElm;
	}
	cout << numA << " " << numB;
	return 0;
}


// 31 ms	0 KB