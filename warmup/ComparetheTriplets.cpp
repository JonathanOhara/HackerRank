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
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    
    int aTotal = 0;
    int bTotal = 0;

    aTotal += a0 > b0 ? 1 : 0;
    aTotal += a1 > b1 ? 1 : 0;
    aTotal += a2 > b2 ? 1 : 0;
    
    bTotal += b0 > a0 ? 1 : 0;
    bTotal += b1 > a1 ? 1 : 0;
    bTotal += b2 > a2 ? 1 : 0;
    
    cout << aTotal << " " << bTotal << endl;
    
    return 0;
}
