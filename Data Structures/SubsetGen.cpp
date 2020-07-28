#include <iostream>
#include<vector>
#include <windows.h>
#include <bitset>

using namespace std;

int n = 10;
vector<int> subset;

void searchBasic(int k) {
	if (k == n) {
		for (auto x : subset) {
			cout << x << " ";
		}
		cout << endl;
		Sleep(1000);
	}
	else {
		// don't include k
		searchBasic(k + 1);
		// include k;
		subset.push_back(k);
		searchBasic(k + 1);
		// to backtrack
		subset.pop_back();
	}
}

void searchBit(int n) {
	for (int b = 0; b < (1 << n); b++) {
		// Process subset
		// Binary representation of b is the subset
		bitset<32> bitRep(b); //convent number into bit array
		for (int i = 0; i < bitRep.size(); i++) {
			if (bitRep[i] == 1)
				cout << i << " ";
		}
		cout << endl;

	}
}

int main() {
	//searchBasic(0);
	searchBit(5);
	return 0;
}