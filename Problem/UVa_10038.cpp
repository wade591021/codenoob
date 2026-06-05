#include <iostream>
using namespace std;
int main() {
	int len;
	while (cin >> len) {
		if (len == 1) {
		int useless;
		cin >> useless;
		cout << "Jolly" << endl;
		continue;
	}
		bool w = 0;
		int a[3001];
		int ans[3001];
		for (int i = 0; i < len; i++) {
			cin >> a[i];
		}
		for (int k = 0; k < len - 1; k++) {
			ans[k] = abs(a[k] - a[k + 1]);
		} 
		for (int j = 1; j < len; j++) {
			w = 0;
			for (int g = 0; g < len - 1; g++) {
				if (j == ans[g]) {
					w = 1;
					break;
				}
			}
			if (w == 0) {
				cout << "Not jolly" << endl;
				break;
			}
		}if (w != 0)cout << "Jolly" << endl;
	}
}