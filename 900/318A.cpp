#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	long long k;
	double n; 
	cin >> n >> k;
	if (k > ceil(n/2)){
		k = (k - ceil(n/2)) * 2;
	}else {
		k = k * 2 - 1;
	}
	cout << k;
	return 0;
}

// 92 ms	0 KB
