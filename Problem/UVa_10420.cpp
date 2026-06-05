#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map <string, int> s;
	int cases;
	cin >> cases;
	cin.ignore();
	while (cases--) {
		string a, b;
		cin >> a;
		s[a]++;
		getline(cin, b);
	}
	for (auto i : s) {
		cout << i.first << " " << i.second << endl;
	}
}