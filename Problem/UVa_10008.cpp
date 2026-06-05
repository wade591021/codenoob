#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	vector<pair<char, int>> a;
	for (int i = 0; i < 26; i++) {
		a.push_back({ s[i], 0 });
	}
	int cases;
	cin >> cases;
	char c;
	while (cin.get(c)) {
		c = toupper(c);
		if (isalpha(c)) {
			for (int i = 0; i < s.size(); i++) {
				if (c == s[i]) {
					a[i].second++;
					break;
				}
			}
			}
		}
	a.erase(remove_if(a.begin(), a.end(), [](const pair<char, int>& p) {return p.second == 0; }),a.end());
	int max = 0;
	sort(a.begin(), a.end(), [](const pair<char, int>& x, const pair<char, int>& y) {
		if (x.second != y.second) {
			return x.second > y.second; 
		}
		return x.first < y.first;      
		});
	for (int i = 0; i < a.size(); i++) {
		cout << a[i].first << " " << a[i].second << endl;
	}
}