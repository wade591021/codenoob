#include <iostream>
#include <vector>
using namespace std;
int count(int a, int b) {
    int ans = 0;
    for (int i = 1; i <= a + b; i++) {
        ans += i;
    }
    ans += a;
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        cout << "Case " << i << ": ";
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << count(c, d) - count(a, b) << "\n";
    }
}