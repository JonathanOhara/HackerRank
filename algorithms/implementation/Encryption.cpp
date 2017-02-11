#include<iostream>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    string s;
    cin >> s;
	
	int len = s.length();
	//cout << "len: " << len << endl;
	int rows = floor(sqrt(len));
	int columns = ceil(sqrt(len));
	
	int lb = (int)sqrt(1.0*len);
    int ub = (int)ceil(sqrt(1.0*len));
    int ans = INT_MAX;
    int r = 0, c = 0;
    for (int row = lb; row <= ub; row++)
        for (int col = row; col <= ub; col++)
            if (row * col >= len && row * col < ans)
            {
                ans = row * col;
                rows = row;
                columns = col;
            }
	
	//cout << "Rows: " << rows << " col: " << columns << endl;
	for( int i = 0; i < columns; i++ ){
		for( int j = 0; j < rows; j++ ){
			int at = (j * columns) + (i);
			if( at < len ){
				cout << s.at(at);
			}
		}
		cout <<  " ";
	}
	
    return 0;
}