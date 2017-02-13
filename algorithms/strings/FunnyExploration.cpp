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
	string s, r;

	cin >> t;

	for (int t_i = 0; t_i < t; t_i++){
		cin >> s;

		bool funny = true;a
		int inverse = s.length() - 1;
		for (int i = 1; i < s.length(); i++, inverse--){
			if (abs(s.at(i) - s.at(i - 1)) != abs(s.at(inverse - 1) - s.at(inverse))){
				funny = false;
				break;
			}
		}

		if (funny){
			cout << "Funny" << endl;
		}
		else{
			cout << "Not Funny" << endl;
		}

	}

	return 0;
}