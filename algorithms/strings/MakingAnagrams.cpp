#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    int total = 0;
    
    int s1Letters[26] = {0};
    
    for( int i = 0; i < s1.length(); i++ ){
        int index = s1[i] - 'a';

        s1Letters[index]++;
    }
    
    int s2Letters[26] = {0};
    
    for( int i = 0; i < s2.length(); i++ ){
        int index = s2[i] - 'a';

        s2Letters[index]++;
    }
    
    for (int i = 0; i < 26; i++) {
        total += abs(s1Letters[i] - s2Letters[i]); 
    }
    
    
    cout << total << endl;
    
    return 0;
}
