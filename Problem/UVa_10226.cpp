#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cases;
    bool first = true;
    cin>>cases;
    cin.ignore();
    string empt;
    getline(cin,empt);
    while(cases--){
        if(!first) cout<<"\n";
        first = false;
        map <string,int> m;
        
        string s;
        int all = 0;
        while(getline(cin,s) && !s.empty()){
            m[s]++;
            all++;
        }
        cout<<fixed<<setprecision(4);
        for(auto it : m){
            double ans = (double)it.second / all;
            cout<<it.first<<" "<<ans * 100.0<<"\n";
        }
    }
}