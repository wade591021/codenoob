#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char c;
	int count = 1;
	while (cin.get(c)) {
		if (c == '\"') {
			if (count % 2 != 0) {
				cout << "``";
			}
			else {
				cout << "''";
			}
			count++;
		}
		else {
			cout << c;
		}
	}
}