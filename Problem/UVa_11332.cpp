#include <iostream>
using namespace std;
int sum(long long int n) {
	while (n >= 10) {
		int ans = 0;
		while (n != 0) {
			ans += n % 10;
			n /= 10;
		}
		n = ans;
	}
	return n;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n;
	while (cin >> n) {
		if (n == 0)break;
		cout << sum(n) << endl;
	}
}