#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
		
		int number = n;
		int count = 0;
		
		while (number > 0){
			int digit = number % 10;
			
			if( digit > 0 && n % digit == 0 ){
				count++;
			}
			number = number / 10;
			
			
		}
		cout << count << endl;
    }
	
    return 0;
}