// C. Save More Mice

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   


    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        vector<long long> x(k);
        for (int i = 0; i < k; i++) {
            cin >> x[i];
        }

        sort(x.begin(),x.end());

        long long cat = 0;
        int escaped = 0;

        for(int i = k - 1; i >= 0; i--){
            long long dist = n - x[i];
            if(dist + cat < n){
                cat += dist;
                escaped ++;
            }else{
                break;
            }
        }

        cout << escaped << "\n";

    }
    return 0;
    
}