#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; i++){
		int n;
		cin >> n;
		string winner = "First";
		if (n % 7 == 0 || n % 7 == 1){
			winner = "Second";
		}
		cout << ( winner ) << endl;
	}
	
	
	return 0;
}