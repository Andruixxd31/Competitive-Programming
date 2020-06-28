#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int n,k,nr,tmp = 0;
	cin >> n >> k;
	int sc[n];
	for(int i = 0; i < n; i++){
		cin >> sc[i];
		if(sc[i]>=sc[k-1]&&sc[i]>0){
			cout << sc[i] << endl;
            nr++;
		}
	}
	cout << nr;
	return 0;
}

