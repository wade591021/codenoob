#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        bool out = 0;
        cout << "Test #" << i << ": ";
        char a, b;
        int n;
        cin >> a >> b >> n;
        vector <vector <long long>> v(n, vector<long long>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            if (out) {
                break;
            }
            for (int j = 0; j < n; j++) {
                if (v[i][j] < 0) {
                    out = 1;
                    break;
                }
                if (v[i][j] != v[n - 1 - i][n -1 - j]) {
                    out = 1;
                    break;
                }
            }
        }
        if (!out) {
            cout << "Symmetric." << "\n";
        }
        else {
            cout << "Non-symmetric." << "\n";
        }
    }
}//