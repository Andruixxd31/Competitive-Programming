#include <iostream>
#include <string.h>
using namespace std; 

int main(int argc, char const *argv[])
{
	int n, x = 0;
	cin >> n;
	string op = "";
	for(int i = 0; i < n; i++){
		cin >> op;
		// str1.compare(str2) != 0
		if(op.compare("++X") == 0 || op.compare("X++") == 0) ++x;
		else if (op.compare("--X") == 0 || op.compare("X--") == 0) --x;
	}
	printf("%d\n",x);
	return 0;
}
// 31 ms 3700 KB