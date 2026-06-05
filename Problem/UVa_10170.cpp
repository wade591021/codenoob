#include <bits/stdc++.h>
using namespace std;

int main(){
    // 加上這兩行加速，cout.tie(0) 在 C++ 裡其實沒效果，寫這兩行就夠快了！
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a, b;
    while(cin >> a >> b){

        while(b > 0){
            b -= a; 
            if(b <= 0){
                
                cout << a << "\n";
                break;
            }
            a++; 
        }
    }
}