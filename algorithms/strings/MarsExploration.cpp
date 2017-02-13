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
	string s;

	cin >> s;
	int disruption = 0;
	for (int i = 0; i < s.length(); i++){
		int iMod = i % 3;

		switch (iMod){
		case 0:
			if (s.at(i) != 'S') disruption++;
			break;
		case 1:
			if (s.at(i) != 'O') disruption++;
			break;
		case 2:
			if (s.at(i) != 'S') disruption++;
			break;
		}
	}

	cout << disruption << endl;

	return 0;
}