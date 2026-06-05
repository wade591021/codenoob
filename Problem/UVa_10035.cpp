#include <bits/stdc++.h>
using namespace std;
//iostream only
int main(){
    long long a,b;
    while(cin>>a>>b && (a || b)){
        int count = 0,c = 0;
        for(;a || b;a/= 10,b/=10){
            c = (a % 10 + b % 10 + c) / 10;
            count += (c>0);
        }
        if(!count) cout<<"No carry operation.\n";
        else cout<<count<<" carry operation"<<(count > 1 ? "s.\n" : ".\n");
    }
}