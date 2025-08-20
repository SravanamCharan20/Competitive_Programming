#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;      

        string s;
        cin >> s;     

        int ones = 0;
        int zeros = 0;

        for(char c : s){
            if(c == '1'){
                ones ++;
            }else{
                zeros ++;
            }
        }

        cout << ((ones + 1) * zeros) + ((ones - 1) * ones) << "\n";
    }

    return 0;
}