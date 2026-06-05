#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a[100][100];
	int b[100][100];
	int r, c;
	int count = 1;
	while (cin >> r >> c) {
		if (r == 0 && c == 0) break;
		if(count > 1)cout << endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> a[i][j];
				b[i][j] = 0;
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (a[i][j] ==  '*') {
					if (i + 1 < r)b[i + 1][j] += 1;
					if (i + 1 < r && j + 1 < c)b[i + 1][j + 1] += 1;
					if (i + 1 < r && j - 1 >= 0)b[i + 1][j - 1] += 1;
					if (i - 1 >= 0)b[i - 1][j] += 1;
					if (i - 1 >= 0 && j + 1 < c)b[i - 1][j + 1] += 1;
					if (i - 1 >= 0 && j - 1 >= 0)b[i - 1][j - 1] += 1;
					if (j + 1 < c)b[i][j + 1] += 1;
					if (j - 1 >= 0)b[i][j - 1] += 1;
				}
			}
		}
		cout << "Field #" << count << ":" << endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (a[i][j] == '*')cout << '*';
				else cout << b[i][j];
			}
			cout << endl;
		}
		count++;
	}
}