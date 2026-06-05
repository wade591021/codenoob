#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cases;
	cin >> cases;
	while (cases--) {
		long long int a, b;
		cin >> a >> b;
		if (a < b||(a+b)%2!=0) {
			cout << "impossible" << endl;
			continue;
		}
		else {
			cout << (a + b) / 2 << " " << (a - b) / 2 << endl;
		}
	}
}