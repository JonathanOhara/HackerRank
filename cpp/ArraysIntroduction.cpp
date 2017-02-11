#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    int ar[1000];
    cin >> size;
    
    for( int i = 0; i < size; i++){
        cin >> ar[i];
    }
    
    for( int i = size -1; i >= 0; i--){
        cout << ar[i] << " ";
    }
    return 0;
}
