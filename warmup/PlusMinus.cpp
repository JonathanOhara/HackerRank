#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int numberOf0, numberOfPositives, numberOfNegatives;

	numberOf0 = numberOfPositives = numberOfNegatives = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] > 0){
			numberOfPositives++;
		}
		else if (arr[i] < 0){
			numberOfNegatives++;
		} else{
			numberOf0++;
		}
	}

	printf("%.6f\n%.6f\n%.6f\n", ((float)numberOfPositives / n), ((float)numberOfNegatives / n), ((float)numberOf0 / n));

    return 0;
}