#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int len;
	while (cin >> len) {
		vector<int> v(len);
		for (int i = 0; i < len; i++) {
			cin >> v[i];
		}
		int count = 0;
		sort(v.begin(), v.end());
		if (v.size() % 2 != 0) {
			cout << v[v.size() / 2]<<" ";
			for (auto i : v) {
				if (i == v[v.size() / 2]) {
					count++;
				}
			}
			cout << count << " " << "1" << endl;
		}
		else {
			cout << v[(v.size() / 2)-1]<<" ";
			for (auto i : v) {
				if (i == v[(v.size() / 2) - 1]|| i == v[v.size() / 2]) {
					count++;
				}
			}
			cout << count << " " << v[v.size() / 2] - v[(v.size() / 2) - 1] + 1 << endl;
		}
	}
}