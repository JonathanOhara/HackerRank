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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
		
		long total = 0;
		
		long price = x;
		if( y + z < x ){
			price = y + z;
		}
		
		total += (price * b);
		
		price = y;
		if( x + z < y ){
			price = x + z;
		}
		
		total += (price * w);
		
		cout << total << endl;
		
    }
    return 0;
}