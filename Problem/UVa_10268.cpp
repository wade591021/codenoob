#include <bits/stdc++.h>
using namespace std;
//iostream string sstream vector
int main(){
    int x;
    while(cin>>x){
        cin.ignore();
        vector <int> v;
        string s;
        getline(cin,s);
        stringstream a(s);
        int num;
        while(a >> num){
            v.push_back(num);
        }
        if(v.size() <= 1){
            cout<<"0"<<"\n";
            continue;
        }
        
        long long ans = 0;
        long long n = v.size() -1;
        for(int i = 0;i<n;i++){
            long long d = v[i] * (n-i);
            ans = ans * x + d;
        }
        cout<<ans<<"\n";
    }
}//