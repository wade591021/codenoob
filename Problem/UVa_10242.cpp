#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a[8];
	while (cin >> a[0]) {
		for (int i = 1; i < 8; i++) {
			cin >> a[i];
		}
		cout << fixed << setprecision(3);
		if (a[0] == a[4] && a[1] == a[5]) {
			cout << a[2] + a[6] - a[0] << " " << a[3] + a[7] - a[1] << endl;
		}
		else if (a[2] == a[4] && a[3] == a[5]) {
			cout << a[0] + a[6] - a[2] << " " << a[1] + a[7] - a[3] << endl;
		}
		else if (a[0] == a[6] && a[1] == a[7]) {
			cout << a[2] + a[4] - a[0] << " " << a[3] + a[5] - a[1] << endl;
		}
		else  {
			cout << a[0] + a[4] - a[2] << " " << a[1] + a[5] - a[3] << endl;
		}
	}
}