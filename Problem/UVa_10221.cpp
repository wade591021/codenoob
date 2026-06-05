#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double a,b;
    string s;
    const double pi = acos(-1.0);
    while(cin>>a>>b>>s){
        double r = a + 6440;
        if(s == "min"){
            b /=60.0;
        }
        if(b > 180.0){
            b = 360.0 - b;
        }
        double rad = b*pi/180.0;
        double arc = r * rad;
        double chord = 2.0 * r * sin(rad / 2.0);
        cout<<fixed<<setprecision(6)<<arc << " "<<chord<<"\n";
        }
    
}