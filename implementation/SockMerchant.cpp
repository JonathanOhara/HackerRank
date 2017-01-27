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
	std::map<int, int> mymap;
	cin >> n;
	vector<int> c(n);
	for (int c_i = 0; c_i < n; c_i++){
		int sock;
		cin >> sock;
		if (mymap.count(sock)){
			mymap[sock] = mymap[sock] + 1;
		}
		else{
			mymap.insert(std::pair<int, int>(sock, 1));
		}
		
	}

	int count = 0;
	for (std::map<int, int>::iterator it = mymap.begin(); it != mymap.end(); ++it){
		count += (it->second / 2);
	}
		
	cout << count << endl;
	return 0;
}