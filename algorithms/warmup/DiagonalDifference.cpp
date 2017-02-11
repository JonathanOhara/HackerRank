#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int diagonal1Total = 0;
	int diagonal2Total = 0;
	for (int i = 0; i < n; i++){
		diagonal1Total += a[i][i];
		diagonal2Total += a[i][ (n - 1) - i];
	}

	cout << (abs(diagonal1Total - diagonal2Total)) << endl;
    
    return 0;
}