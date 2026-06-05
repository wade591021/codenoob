#include <iostream>
#include <algorithm> // for sort
#include <cmath>     // for abs
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin >> cases;
    while (cases--) {
        int a[500];
        int len;
        cin >> len;

        for (int i = 0; i < len; i++) {
            cin >> a[i];
        }

        // Sort ascending
        sort(a, a + len);

        // Median index
        int median = a[len / 2];

        // Sum of absolute differences
        int ans = 0;
        for (int i = 0; i < len; i++) {
            ans += abs(median - a[i]);
        }

        cout << ans << "\n";
    }
}