#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s = "1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
    string a;
    while(getline(cin,a)){
        for(char c : a){
            if(isspace(c)){
                cout<<" ";
                continue;
            }
            else{
                    c = tolower(c);
                    for(int i = 0;i<s.size();i++){
                        if(c == s[i]){
                            cout<<s[i-2];
                            break;
                        }
                    }
            }
        }
        cout<<"\n";
    }
    
    
    
    
}