#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for( int ti = 0; ti < t; ti++ ){
        int changes = 0;
        string word;
        cin >> word;
        
        for( int i = 0; i < word.length() / 2; i++ ){
            if( word[i] > word[word.length() - 1 - i]){
                changes += word[i] - word[word.length() - 1 - i];
            }else{
                changes += word[word.length() - 1 - i] - word[i];
            }
        }
        
        cout << changes << endl;
    }
    return 0;
}
