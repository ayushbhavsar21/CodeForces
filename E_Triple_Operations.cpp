#include <bits/stdc++.h>
using namespace std;
int MAX = 2e5 + 2 ;

int count(int x){
    int c = 0;
    while(x>0){
        x =x /3;
        c++;
    }
    return c;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);  

   vector<int> op (MAX);
   vector<int> opsum (MAX);

   opsum[0] = 0;

   for(int i=1;i<MAX;i++){
        op[i] = count(i);
        opsum[i] = opsum[i - 1] + op[i];
   }

   int t;cin>>t;
   while(t--){
    int l,r;cin>>l>>r;

    int ans = opsum[r] - opsum[l-1] + op[l];
    cout<<ans<<endl;
   }
   
    return 0;
}