#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    
    cin >> t;
    
    
    for( int t_i = 0; t_i < t; t_i++ ){
        int s1Letters[26] = {0};
        int s2Letters[26] = {0};
        
        string s;
        cin >> s;
        
        int count = 0;
        
        if( s.length() %2 == 1 ){
            count = -1;
        }else{
            for( int i = 0; i < s.length() / 2; i++ ){
                s1Letters[ s[i] - 'a']++;
            }
            
            int len = s.length() - 1;
            for( int i = 0; i < s.length() / 2; i++ ){
                s2Letters[ s[ len - i ] - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                if( s1Letters[i] > s2Letters[i] && s1Letters[i] > 0  ){
                    count += abs( s1Letters[i] - s2Letters[i] );
                }
               
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
