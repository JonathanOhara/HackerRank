#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	int n;
	int smallest = INT_MAX;
	cin >> n;
	vector<int> arr(n);

	for (int arr_i = 0; arr_i < n; arr_i++){
		int temp;
		cin >> temp;
		arr[arr_i] = temp;

		smallest = min(temp, smallest);
	}

	int cutted;

	do{
		int newSmallest = INT_MAX;
		cutted = 0;
		for (int arr_i = 0; arr_i < n; arr_i++){
			if (arr[arr_i] > 0){
				cutted++;
			}

			arr[arr_i] = arr[arr_i] - smallest;
			
			if (arr[arr_i] > 0){	
				newSmallest = min(arr[arr_i], newSmallest);
			}
			
		}
		smallest = newSmallest;
		//cout << "SMALLEST " << smallest << endl;
		if ( cutted > 0 ) cout << cutted << endl;
	} while (cutted > 0 && smallest > 0 );

	return 0;
}