#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int amount;
	int numberOfCoins;

	cin >> amount >> numberOfCoins;

	vector<int> coins(numberOfCoins);

	for (int i = 0; i < numberOfCoins; i++)	{
		cin >> coins[i];
	}

	int m = coins.size() * sizeof(int) / sizeof(coins[0]);
	
	
	vector<long> table(amount + 1);
	fill(table.begin(), table.end(), 0);

	table[0] = 1;

	for (int i = 0; i<m; i++)
		for (int j = coins[i]; j <= amount; j++)
			table[j] += table[j - coins[i]];

	cout << table[amount] << endl;

	return 0;
}