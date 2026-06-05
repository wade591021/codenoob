#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true) {
		string s;
		cin >> s;
		string a = s;
		if (s == "0")break;
		if (s == "9") {
			cout << "9 is a multiple of 9 and has 9 - degree1." << endl;
			continue;
		}
		int count = 0;
		while (s.size() > 1) {
			int temp = 0;
			for (int i = 0; i < s.size(); i++) {
				temp += s[i] - '0';
			}
			if (temp % 9 != 0) {
				count = 0;
				break;
			}
			s = to_string(temp);
			count++;
		}
		if (count>0) cout << a << " is a multiple of 9 and has 9-degree " << count << "." << endl;
		else cout << a << " is not a multiple of 9." << endl;
	}
}