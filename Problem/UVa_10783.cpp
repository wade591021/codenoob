#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int times;
	cin >> times;
	int count = 0;
	while (times--) {
		count += 1;
		long long int a, b;
		cin >> a >> b;
		int ans = 0;
		for (long long int i = a; i <= b; i++) {
			if (i % 2 == 1)ans += i;
		}
		cout << "Case " << count << ": " << ans << endl;
	}
}