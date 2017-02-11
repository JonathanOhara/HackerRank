#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, q, size, t;
	cin >> n >> q;
	vector<vector<int>> vec(n);
	for (int n_i = 0; n_i < n; n_i++){
		cin >> size;

		vector<int> other(size);
		for (int s_i = 0; s_i < size; s_i++){
			cin >> t;

			other[s_i] = t;
		}

		vec[n_i] = other;
	}
	
	for (int q_i = 0; q_i < q; q_i++){
		int whatArray, pos;
        
        
		cin >> whatArray >> pos;
		cout << (vec[whatArray])[pos] << endl;
	}

	return 0;
}