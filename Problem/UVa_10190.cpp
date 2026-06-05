#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    while(cin>>a>>b){
        bool bor = 0;
        if(a % b != 0 || a<=1 || b <= 1){
            cout<<"Boring!"<<"\n";
            continue;
        }
        vector <long long> v;
        while(a > 1){
            if(a % b == 0){
                v.push_back(a);
                a/=b;
            }
            else{
                bor = 1;
                break;
            }
        }
        if(bor){
            cout<<"Boring!"<<"\n";
        }
        else{
            v.push_back(1);
            for(int i = 0;i<v.size();i++){
                cout<<v[i]<<(i == v.size()-1?"\n":" ");
            }
        }
    }
}