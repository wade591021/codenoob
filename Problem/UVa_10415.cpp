#include <bits/stdc++.h>
using namespace std;
//iostream cstring string 
int main(){
    int cases;
    cin>>cases;
    cin.ignore();
    while(cases--){
        bool on[11] = {0};
        int times[11];
        bool now[11] = {0};
        memset(times,0,sizeof(times));
        string s;
        getline(cin,s);
        for(char c : s){
            memset(now,0,sizeof(now));
            string t;
            if(c == 'c'){
                t += "2347890";
            }
            if(c == 'd'){
                t += "234789";
            }
            if(c == 'e'){
                t += "23478";
            }
            if(c == 'f'){
                t += "2347";
            }
            if(c == 'g'){
                t += "234";
            }
            if(c == 'a'){
                t += "23";
            }
            if(c == 'b'){
                t += "2";
            }
            if(c == 'C'){
                t += "3";
            }
            if(c == 'D'){
                t += "1234789";
            }
            if(c == 'E'){
                t += "123478";
            }
            if(c == 'F'){
                t += "12347";
            }
            if(c == 'G'){
                t += "1234";
            }
            if(c == 'A'){
                t += "123";
            }
            if(c == 'B'){
                t += "12";
            }
           for(char c : t){
               int num = (c == '0'?10:c - '0');
               now[num] = true;
           }
           for(int i = 1;i<=10;i++){
               if(!on[i] && now[i]){
                   times[i]++;
               }
               on[i] = now[i];
           }
        }
        for(int i = 1;i<=10;i++){
            cout<<times[i]<<(i == 10?"\n":" ");
        }
    }
}//