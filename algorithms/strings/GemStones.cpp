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

	map<char, int> myMap;
	

	for (int t_i = 0; t_i < t; t_i++){
		cin >> s;

        set<char> uniqueLetters;
		for (int i = 0; i < s.length(); i++){
			uniqueLetters.insert(s.at(i));
		}

		std::set<char>::iterator it;
		for (it = uniqueLetters.begin(); it != uniqueLetters.end(); ++it)	{
			char c = *it;

			if (myMap.count(c) > 0){
				myMap[c]++;
			}
			else{
				myMap.insert(pair<char, int>(c, 1));
			}
		}
	}
	int count = 0;
	std::map<char, int>::iterator it;
	for (it = myMap.begin(); it != myMap.end(); ++it)	{
		int second = (*it).second;

        //cout << "first: " << (*it).first << " second: " << second << endl;
		if (second == t){
			count++;
		}
	}

	cout << count << endl;

	return 0;
}