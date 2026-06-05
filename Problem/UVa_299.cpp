#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cases;
	cin >> cases;
	while (cases--) {
		int count = 0;
		int len;
		cin >> len;
		vector <int> train;
		for (int i = 0; i < len; i++) {
			int a;
			cin >> a;
			train.push_back(a);
		}
		for (int i = 0; i < train.size(); i++) {
			for (int j = i+1; j < train.size(); j++) {
				if (train[i] > train[j]) {
					swap(train[i], train[j]);
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
}