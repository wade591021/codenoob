#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isprime(int n) {
	bool out = 0;
	for (int i = 2; i < n / 2 + 1; i++) {
		if (n % i == 0) {
			out = 1;
			return 0;
			break;
		}
	}
	if (!out) {
		return 1;
	}
}
int rev(int n) {
	string s = to_string(n);
	reverse(s.begin(), s.end());
	int a = stoi(s);
	return a;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n) {
		if (isprime(n)) {
			if (isprime(rev(n))&&n!=rev(n)) {
				cout << n << " is emirp." << endl;
			}
			else {
				cout << n << " is prime." << endl;
			}
		}
		else {
			cout << n << " is not prime." << endl;
		}
	}
}