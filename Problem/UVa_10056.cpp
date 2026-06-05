#include <bits/stdc++.h>

using namespace std;

void wade(int n){
    double p;
    int a;
    cin>>p>>a;
    if(p == 0.0){
        cout<<"0.0000"<<"\n";
        return;
    }
    double pp = 1.0 - p;
    double a1 = pow(pp,a-1) * p;
    double r = pow(pp, n);
    double ans = a1 / (1.0 - r);
    cout<<ans<<"\n";
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cases;
    cin>>cases;
    while(cases--){
        int num;
        cin>>num;
        cout<<fixed<<setprecision(4);
        wade(num);
    }
}