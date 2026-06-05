#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    string a,b;
    while(n--){
        count++;
        cout<<"Pair #"<<count<<":";
        cin>>a>>b;
        if(__gcd(stoi(a,0,2),stoi(b,0,2))!=1){
            cout<<" All you need is love!"<<"\n";
        }
        else{
            cout<<" Love is not all you need!"<<"\n";
        }
    }
}