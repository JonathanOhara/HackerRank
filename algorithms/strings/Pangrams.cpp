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
	char s[1000];

	cin.getline(s, sizeof(s));
	set<char> charSet;
	for (int i = 0; i < strlen(s); i++){
		if (s != '\0'){
			charSet.insert( tolower( s[i] ) );
		}
		else{
			break;
		}
		
	}
	if (charSet.size() == 27){
		cout << "pangram" << endl;
	}
	else{
		cout << "not pangram" << endl;
	}
	return 0;
}