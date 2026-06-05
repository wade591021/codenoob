#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> fib;
	
	int a = 0, b = 1;
	int now = 1;
	
	while (now < 100000000) {
		fib.push_back(now);
		now = a + b;
		a = b;
		b = now;
	}
	reverse(fib.begin(), fib.end());
	// create fib array
	


	int cases;
	cin >> cases;
	int i;
	while(cin>>i) {
		cout <<i<< " = ";
		int temp = i;
		string s;
		for (int j = 0; j < fib.size() -1; j++) {
			if (fib[j] <= temp) {
				temp -= fib[j];
				s += '1';
			}
			else {
				s += '0';
			}
		}
		bool start = 0;
		for (char c : s) {
			if (c == '1') {
				start = 1;
			}
			if (start) {
				cout << c;
			}
		}

		cout << " (fib)" << endl;
	}
}