#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> b = a;
        sort(b.begin(), b.end());

        if(a == b) {
            cout << "YES\n";
        }
        else if(k == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}