#include <iostream>
#include <algorithm>
using namespace std;
int cyclelen(int n) {
	int count = 1;
	while (n != 1) {
		if (n % 2 != 0) {
			n = 3 * n + 1;
		}
		else {
			n /= 2;
		}
		count++;
	}
	return count;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, j;
	while (cin >> i >> j) {
		int max = 0;
		cout << i << " " << j << " ";
		if (i > j) {
			swap(i, j);
		}

		for (int k = i; k <= j; k++) {
			if (cyclelen(k) > max) {
				max = cyclelen(k);
			}
		}
		cout << max << endl;
	}
}