#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    vector <string> v2 = { "Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday" };
    int cases;
    cin >> cases;
    while (cases--) {
        int a, b;
        cin >> a >> b;
        int day = 0;
        for (int i = 0; i < a - 1; i++) {
            day += v[i];
        }
        day += b;
        day %= 7;
        if (day == 0) {
            day = 7;
        }
        cout << v2[day - 1] << "\n";
    }
}