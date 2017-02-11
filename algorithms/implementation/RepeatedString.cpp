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
	string s;
	cin >> s;
	long n;
	cin >> n;
	int aCount = 0;

	for (int i = 0; i < s.length(); i++){
		if (s.at(i) == 'a'){
			aCount++;
		}
	}


	int mod = n % s.length();
	long int total = aCount * (n / s.length());

	for (int i = 0; i < mod; i++){
		if (s.at(i) == 'a'){
			total++;
		}
	}

	cout << total << endl;


	return 0;
}
