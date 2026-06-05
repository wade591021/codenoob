#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int a,b;
 vector <int> v;
 int j = 1;
 while(j< 1000000){
     v.push_back(j*j);
     j++;
 }
while(cin>>a>>b && a!=0 || b!=0){
     int ans = 0;
     for(int i = 0;i<v.size();i++){
         if(v[i]>=a&&v[i]<=b){
             ans++;
         }
         else if (v[i]>b){
             break;
         }
     }
     cout<<ans<<"\n";
 }
}