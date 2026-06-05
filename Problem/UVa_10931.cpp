#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s;
    while(cin>>s && s!= 0){
        bitset <64> b(s);
        string ss = b.to_string();
        auto it = find_if(ss.begin(),ss.end(),[](char c) {return c != '0';});
        ss.erase(ss.begin(),it);
        cout<<"The parity of "<<ss<<" is ";
        int ans = __builtin_popcount(s);
        cout<<ans<<" (mod 2)."<<"\n";
    }
}