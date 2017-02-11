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

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}


int main(){
	long int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	
	qsort(a, 5, sizeof(long int), compare);

	cout << (a[0] + a[1] + a[2] + a[3]) << " " << (a[1] + a[2] + a[3] + a[4]) << endl;
	return 0;
}