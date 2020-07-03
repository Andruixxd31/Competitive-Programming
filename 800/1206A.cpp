#include <iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int n = m = nElm = mElm = 0;
	int i;
	int numA = numB = 0;

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