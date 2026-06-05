#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s && s != "0"){
        int odd = 0;
        int even = 0;
        for(int i = 0;i<s.size();i++){
            if(i%2 == 0){
                even += s[i] - '0';
            }
            else{
                odd += s[i] - '0';
            }
        }
        cout<<s;
        cout<<(abs(odd - even) == 0 || abs(odd - even) % 11 == 0 ? " is a multiple of 11." :" is not a multiple of 11.")<<"\n";
    }
}