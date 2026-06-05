#include <bits/stdc++.h>
using namespace std;
//iostream string cctype
int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        int da[30] = {0};
        int db[30] = {0};
        for(char c : a){
            if(isalpha(c)){
                da[c - 'a']++;
            }
        }
        for(char c : b){
            if(isalpha(c)){
                db[c - 'a']++;
            }
        }
        for(int i = 0;i<26;i++){
            if(da[i] > 0 && db[i] > 0){
                int times = min(da[i],db[i]);
                for(int j = 0;j < times;j++){
                    cout<<(char)(i + 'a');
                }
            }
        }
        cout<<"\n";
    }
    
    
    
    
}//