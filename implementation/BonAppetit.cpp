#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, k, charged;

	cin >> n >> k;

	vector<int> a(n);

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	cin >> charged;
	
	int total = 0;
	for (int i = 0; i < n; i++){
		if (i != k){
			total += a[i];
		}
	}
	total = total / 2;

	if (total == charged){
		cout << "Bon Appetit" << endl;
	}
	else{
		cout << (charged - total) << endl;
	}

	return 0;
}