#include <iostream>
#include <string>
using namespace std; 

int main(int argc, char const *argv[])
{
	int n; 
	cin >> n;
	string words[n];
	for (int i = 0; i < n; i++){
		cin >> words[i];
	}

	for (int i = 0; i < n; i++){
		if(words[i].length() <= 10){
			cout << words[i] << endl;
		}else {
			cout << words[i].at(0) << words[i].length()-2 << words[i].at(words[i].length()-1) << endl;
		}	
	}
	return 0;
}

//31ms 3800 KB