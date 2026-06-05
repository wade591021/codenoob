#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string ss;
	vector <string> inp;
	while (getline(cin, ss)) {
		inp.push_back(ss);
	}
	reverse(inp.begin(), inp.end());
	int len = 0;
	for (int i = 0; i < inp.size(); i++) {
		if (inp[i].size() > len) {
			len = inp[i].size();
		}
	}
	for (int j = 0; j < len; j++) {
		for (int i = 0; i < inp.size(); i++) {
			if (j >= inp[i].size()) {
				cout << " ";
			}
			else {
				cout << inp[i][j];
			}
		}
		cout << endl;
	}
}