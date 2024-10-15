#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
    string s;cin>>s;
    string ans = " ";
    if(s.length()<=10){
        ans =s;
    }
    else{
        ans = s[0];
        int n = s.length() - 2;
        string x=to_string(n);
        ans+=x;
        ans+=s[s.length()-1];
    }
    cout<<ans<<endl;
   }  
    return 0;
}