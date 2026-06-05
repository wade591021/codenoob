#include <bits/stdc++.h>
using namespace std;
//string vector map algorithm
bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main(){
    string s;
    bool first = true;
    while(getline(cin,s)){
        map <int,int>m;
        if(!first){
            cout<<"\n";
        }
        first = false;
        for(char c : s){
            m[int(c)]++;
        }
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),cmp);
        for(int i = 0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<"\n";
        }
    }
    
    
    
}
