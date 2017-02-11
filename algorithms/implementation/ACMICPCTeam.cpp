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
	int m;
	cin >> n >> m;
	vector<string> topic(n);
	for (int topic_i = 0; topic_i < n; topic_i++){
		cin >> topic[topic_i];
	}

	int maxTopics = 0;
	int count = 0;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			bitset<500> a(topic[i]), b(topic[j]);
			bitset<500> c = a | b;
			int bCount = c.count();
			if (bCount > maxTopics){
				maxTopics = bCount;
				count = 1;
			}
			else if (bCount == maxTopics){
				count++;
			}
		}
	}

	cout << maxTopics << endl << count << endl;
	
	
	return 0;
}