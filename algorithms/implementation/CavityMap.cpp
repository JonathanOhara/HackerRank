#include <bits/stdc++.h>

using namespace std;

int convert(char c){
    return c - '0';
}

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    vector<string> response(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
       response[grid_i] = grid[grid_i];
    }
    
    for( int i = 1; i < n-1; i++ ){
        for( int j = 1; j < n-1; j++ ){
            int depth = convert( grid[i].at(j) );
            if( depth > convert( grid[i-1].at(j) ) &&  
                depth > convert( grid[i+1].at(j) ) &&  
                depth > convert( grid[i].at(j-1) ) &&  
                depth > convert( grid[i].at(j+1) ) ){
                response[i][j] = 'X';
            }
        }
    }
    
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cout << response[i][j];
        }
        cout << endl;
    }
    return 0;
}
