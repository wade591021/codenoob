#include <bits/stdc++.h>
using namespace std;
//string
int main(){
    int cases;
    string a;
    cin>>cases;
    while(cases-- && cin>>a){
        cout<<__builtin_popcount(stoi(a))<<" "<<__builtin_popcount(stoul(a,0,16))<<"\n";
    }
}