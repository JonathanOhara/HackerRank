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
	int i, j, k;
	
	cin >> i >> j >> k;
	
	int count = 0;
	for(int day = i; day <= j; day++){
		int reverseDay = 0;
		int num = day;
		
		while(num > 0){
            reverseDay = reverseDay * 10 + (num % 10);
            num = num / 10;
		}
        //cout << reverseDay << endl;
		if( abs( day - reverseDay ) % k == 0 ){
			count++;
		}
		
	}
	
	cout << count << endl;
	
    return 0;
}