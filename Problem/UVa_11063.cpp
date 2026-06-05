#include <bits/stdc++.h>
using namespace std;
//iostream vector set 
int main(){
    int len;
    int count = 0;
    while(cin>>len){
        count++;
        cout<<"Case #"<<count<<": ";
        bool b2 = true;
        vector <int> v(len);
        set <int> s;
        for(int i = 0;i<len;i++){
            cin>>v[i];
        }
        for(int i = 0;i<len;i++){
            if(v[i] < 1){
                b2 = false;
                break;
            }
        }
        for(int i = 0;i<len-1;i++){
            if(v[i] >= v[i+1]){
                b2 = false;
                break;
            }
        }
        int sum = 0;
        for(int i = 0;i<len;i++){
            for(int j = i;j<len;j++){
                s.insert(v[i] + v[j]);
                sum++;
            }
        }
        if(s.size() != sum) b2 = false;
        if(b2) cout<<"It is a B2-Sequence."<<"\n";
        else cout<<"It is not a B2-Sequence."<<"\n";
        cout<<"\n";
    }
}//