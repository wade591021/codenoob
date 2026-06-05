#include <bits/stdc++.h>
using namespace std;
//SB only
int main(){
    int len;
    while(cin>>len && len!=0){
            int top = 1;
            int down = 6;
            int face = 5;
            int behind = 2;
            int left = 3;
            int right = 4;
        while(len--){
            string s;
            cin>>s;
            if(s == "north"){
                int dtop = face;
                int ddown = behind;
                int dface = down;
                int dbehind = top;
                int dleft = left;
                int dright = right;
                 top = dtop;
                 down = ddown;
                 face = dface;
                 behind = dbehind;
                 right = dright;
                 left = dleft;
            }
            else if(s == "east"){
                int dtop = left;
                int ddown = right;
                int dface = face;
                int dbehind = behind;
                int dleft = down;
                int dright = top;
                 top = dtop;
                 down = ddown;
                 face = dface;
                 behind = dbehind;
                 right = dright;
                 left = dleft;
            }
            else if(s == "west"){
                int dtop = right;
                int ddown = left;
                int dface = face;
                int dbehind = behind;
                int dleft = top;
                int dright = down;
                 top = dtop;
                 down = ddown;
                 face = dface;
                 behind = dbehind;
                 right = dright;
                 left = dleft;
            }
            else if(s == "south"){
                int dtop = behind;
                int ddown = face;
                int dface = top;
                int dbehind = down;
                int dleft = left;
                int dright = right;
                 top = dtop;
                 down = ddown;
                 face = dface;
                 behind = dbehind;
                 right = dright;
                 left = dleft;
            }
        }
        cout<<top<<"\n";
    }
}///////////