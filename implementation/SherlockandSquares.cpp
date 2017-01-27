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

int main() {
	int t;
	int a, b;
	int total;
	double sq;
	int sqInt;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> a >> b;
		total = 0;
		for (int j = a; j <= b; j++){
			sq = sqrt(j);
			sqInt = static_cast<int>(sq);

			if (sq == sqInt){
				total++;
				j += sqInt * 2;
			}
		}
		cout << total << endl;
	}
	return 0;
}