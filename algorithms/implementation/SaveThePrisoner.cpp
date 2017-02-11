#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t, n, m, s;
	
	cin >> t;
	for( int i = 0; i < t; i++ ){
		cin >> n >> m >> s;
		
		s--;
		m--;
		s = (s + m) % n;
		s++;
		
		cout << s << endl;
	}
	
	return 0;
}
