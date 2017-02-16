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
    cin >> n;
    string B;
    cin >> B;
    int changes = 0;
    for( int i = 0; i < n-2; i++ ){
        if( B.at( i ) == '0' 
         && B.at( i+1) == '1' 
         && B.at( i+2 ) == '0' ){
            changes++;
            i+=2;
        }
    }
    
    cout << changes << endl;
    
    return 0;
}
