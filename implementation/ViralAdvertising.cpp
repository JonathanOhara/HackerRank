#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int total = 0;
	cin >> n;
	
	int peopleIteration = 5 / 2;

	for(int i = 0; i < n; i++){
		total += peopleIteration;
		int newPeopleIteration = 0;
		
		newPeopleIteration = 3 * peopleIteration;

		
		peopleIteration = newPeopleIteration / 2; 
	}
	
	cout << total << endl;
	
    return 0;
}