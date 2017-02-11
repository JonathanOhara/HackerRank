#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++){
		int n, height;
		cin >> n;
		height = 1;
		for (int j = 0; j < n; j++){
			if (j % 2 == 0){
				height = height * 2;
			}
			else{
				height = height + 1;
			}
			
		}
		cout << height << endl;
	}
	return 0;
}