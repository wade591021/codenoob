#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int cases;
    if (cin >> cases) {
        for (int t = 1; t <= cases; t++) {
            if (t > 1) {
                cout << "\n";
            }
            
            cout << "Case " << t << ":\n";
            
            int cost[36];
            for (int i = 0; i < 36; i++) {
                cin >> cost[i];
            }
            
            int queries;
            cin >> queries;
            while (queries--) {
                long long n;
                cin >> n;
                
                cout << "Cheapest base(s) for number " << n << ":";
                
                int base_costs[37] = {0};
                int min_cost = 2e9;
                
                for (int base = 2; base <= 36; base++) {
                    long long temp = n;
                    int current_cost = 0;
                    
                    if (temp == 0) {
                        current_cost = cost[0];
                    }
                    
                    while (temp > 0) {
                        int remainder = temp % base;
                        current_cost += cost[remainder];
                        temp /= base;
                    }
                    
                    base_costs[base] = current_cost;
                    
                    if (current_cost < min_cost) {
                        min_cost = current_cost;
                    }
                }
                
                for (int base = 2; base <= 36; base++) {
                    if (base_costs[base] == min_cost) {
                        cout << " " << base;
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}