#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
	int n;
	int m;
	cin >> n >> m;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++){
		cin >> a[a_i];
	}
	vector<int> b(m);
	for (int b_i = 0; b_i < m; b_i++){
		cin >> b[b_i];
	}

	int count = 0;
	for (int i = a[n - 1]; i <= b[0]; i++){
		bool ok = true;
		for (int a_i = 0; a_i < n; a_i++){
			if (i % a[a_i] > 0){
				ok = false;
			}
		}
		if (!ok) continue;
		for (int b_i = 0; b_i < m; b_i++){
			if (b[b_i] % i  > 0){
				ok = false;
			}
		}

		if (ok) count++;
	}

	cout << count << endl;

	return 0;
}