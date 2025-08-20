// (Divisors of a number (finding all divisors in √N time)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> divisors(n + 1,0);
    for(int i = 1;i < n;i ++){
        for(int j = i;j < n; j += i){
            divisors[j] ++;
        }
    }

    for(int i = 1; i < n; i++){
        cout << "Number: " << i << " -> divisor count = " << divisors[i] << endl;
    }

    return 0;
}