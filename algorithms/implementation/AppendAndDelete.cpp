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
	string s;
	cin >> s;
	string t;
	cin >> t;
	int k;
	cin >> k;

	int equals = 0;

	int sLength = s.length();
	int tLength = t.length();

 	for (int i = 0; i < min( sLength, tLength ); i++){
		//cout << s.at(i) << " == " << t.at(i) << endl;
		if (s.at(i) == t.at(i)){
			equals++;
		}
		else{
			break;
		}
	}
	

	if ((sLength + tLength - 2 * equals) > k ){
		cout << "No" << endl;
	}
	else if ((sLength + tLength - 2 * equals) % 2 == k % 2){
		cout << "Yes" << endl;
	}
	else if ((sLength + tLength - k) < 0){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	//	system("pause");

	return 0;
}