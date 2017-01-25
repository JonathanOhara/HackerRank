#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    
	int hour = (time[0] - 48) * 10 + (time[1] - 48);
	if (time[8] == 'P' ){
		if (hour < 12){
			hour = (hour + 12);
		}
	}
	else{
		hour %= 12;
	}

	printf("%02d", hour);
	for (int i = 2; i < 8; i++){
		printf("%c", time[i]);
	}
	cout << endl;
    
    return 0;
}
