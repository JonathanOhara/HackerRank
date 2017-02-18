#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    
    int letter[26] = {0};
    int count = 0;
    
    
    for( int i = 0; i < s.length(); i++ ){
        int index = s[i] - 'a';
        //cout << " index: " << index << endl;
            
        letter[index]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (letter[i] % 2 == 1) {
            count++;
        }
    }

    if (count > 1) {
        flag = 1;
    }
    
    
    if(flag==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
