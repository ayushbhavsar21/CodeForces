#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;
   int ans=0;
   while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        if(v[1] == 1 && v[2]==1)
            ans++;
   }  
   cout<<ans<<endl;
    return 0;
}