#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;cin>>t;
  while(t--){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> t (v);
    sort(t.begin(),t.end());
    if(k==1){
        if(v == t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }  
    else {
        cout<<"YES"<<endl;
    }
  }
  return 0;
}