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
	int size[26];
	string word;
	
	for (int i = 0; i < 26; ++i){
		cin >> size[i];
	}

	cin >> word;
	int greaterSize = 0;
	for (int i = 0; i < word.length(); i++){
		char c = word[i];
		
		if (size[c - 97] > greaterSize){
			greaterSize = size[c - 97];
		}


	}

	cout << word.length() * greaterSize << endl;
    return 0;
}