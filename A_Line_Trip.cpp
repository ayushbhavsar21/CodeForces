#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;cin>>t;
  while(t--){
    int n,x;cin>>n>>x;  
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int maxi = 0;
    int pre = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi , (v[i] - pre));
        pre = v[i];
    }
    maxi = max(maxi , 2*(x - v[n-1]));
    cout<<maxi<<endl;
  }
  return 0;
}