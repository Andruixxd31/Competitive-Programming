#include <iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int n; 
	cin >> n;
	int arr[n];
	int temp = 0;
	int count = 1;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] >= arr[i-1])
		{
			++temp;
			count = max(count, temp);
		}	
		else
			temp = 1;
	}
	cout << count;
	return 0;
}
