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
	int n, k; 	
	int i;
	cin >> n >> k;
	std::map<int, int> myMap;	
	int temp;
	
	for( i = 0; i < k; i++ ){
		myMap.insert(std::pair<int, int>(i, 0));
	}
	
	for( i = 0; i < n; i++ ){
		cin >> temp;
		temp = temp % k;
		
		myMap[temp] = myMap[temp] + 1;
	}
	
	int subsetElements =  min(myMap[0], 1);
	//cout << "SUB: " << subsetElements << endl;
	int upto = k/2;
	if (upto * 2 == k) upto -= 1;
	for ( i = 1; i <= upto; ++i){ 
		subsetElements += max( myMap[i], myMap[k-i] );
		
	}
	
	if (k % 2 == 0) subsetElements += myMap[k/2] > 0;
	
	cout << subsetElements << endl;
	
	return 0;
}