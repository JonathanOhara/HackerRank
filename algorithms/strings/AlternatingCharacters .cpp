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
	string s;

	cin >> t;

	for (int i = 0; i < t; i++){
		cin >> s;
		int removals = 0;
		char lastIndex = s.at(0);
		for (int j = 1; j < s.length(); j++){
			if (lastIndex != s.at(j)){
				lastIndex = s.at(j);
			}else{
				removals++;
			}
		}
		cout << removals << endl;
	}
	return 0;
}