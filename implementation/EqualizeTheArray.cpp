#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> c(n);

	int arr[100] = { 0 };
	for (int c_i = 0; c_i < n; c_i++){
		cin >> c[c_i];

		arr[c[c_i]]++;
	}

	int occurrences = arr[0];
	int greater = 0;
	for (int i = 1; i < 100; i++){
		if (arr[i] > occurrences){
			occurrences = arr[i];
			greater = i;
		}
	}

	
	int removes = 0;
	for (int i = 0; i < n; i++){
		if (c[i] != greater){
			removes++;
		}
	}
	

	cout << removes << endl;
	return 0;
}