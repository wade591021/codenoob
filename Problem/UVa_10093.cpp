#include <bits/stdc++.h>
using namespace std;
//cctype algorithm 
int deal(char c){
    if(isdigit(c)) return c - '0';
    else if (isalpha(c)) {
        if(islower(c)){
            return c  - 'a' + 36;
        }
        else{
            return c  - 'A' + 10;
        }
    }
    return -1;
}
int main(){
    string a;
    while(cin>>a){
        bool find = false;
        int ans = 1;
        int sum = 0;
        for(char c : a){
            if(deal (c) != -1){
                sum += deal(c);
                ans = max(ans,deal(c));
            }
        }
        for(int i = ans+1;i<=62;i++){
            if(sum % (i-1) == 0){
                cout<<i<<"\n";
                find = true;
                break;
            }
        }
        if(!find) cout<<"such number is impossible!"<<"\n";
    }
}