#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        
        vector<int> v1;
        vector<int> v2;
        
        
        if (k % 2 == 0) {
            for (int i = 1; i <= k / 2; i++) {
                v1.push_back(xc + i);
                v1.push_back(xc - i);
                v2.push_back(yc + i);
                v2.push_back(yc - i);
            }
        } 
        
        else {
           
            cout << xc << " " << yc << endl;
            k = k - 1;  
            
            for (int i = 1; i <= k / 2; i++) {
                v1.push_back(xc + i);
                v1.push_back(xc - i);
                v2.push_back(yc + i);
                v2.push_back(yc - i);
            }
        }
        // int sum1 = 0 , sum2 = 0;
        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " " << v2[i] << endl;
            // sum1 += v1[i];
            // sum2 += v2[i];
        }
        // cout<<"#"<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}
