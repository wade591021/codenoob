#include <bits/stdc++.h>
using namespace std;
//iomanip 
void bangla(long long a){
    if(a >= 10000000){
        bangla(a / 10000000);
        cout<<" "<<"kuti";
        a %= 10000000;
    }
    if (a >= 100000){
        bangla(a/100000);
        cout<<" "<<"lakh";
        a %= 100000;
    }
    if (a >= 1000){
        bangla(a/1000);
        cout<<" "<<"hajar";
        a %= 1000;
    }
    if (a >= 100){
        bangla(a/100);
        cout<<" "<<"shata";
        a %= 100;
    }
    if(a > 0){
        cout<<" "<<a;
    }
}
int main(){
    long long n;
    int count = 0;
    while(cin>>n){
        count++;
        cout<<setw(4)<<count<<".";
        if(n == 0){
            cout<<" 0";
        }
        else{
            bangla(n);
        }
        cout<<"\n";
    }
}