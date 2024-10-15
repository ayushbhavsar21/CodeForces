#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }  
    vector<int> q;
    q.push_back(p[n-1]);
    for(int i=0;i<n-1;i++){
        q.push_back(p[i]);
    }
    for(int i=0;i<n;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}