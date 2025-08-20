#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> primes(n + 1,1);
    primes[1] = 0;

    for(int i = 2; i * i <= n; i++){
        if(!primes[i]) continue;
        for(int j = i * i; j <= n; j += i){
            primes[j] = 0;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i << " is prime? -> " << (primes[i] ? "Yes" : "No") << "\n";
    }

    return 0;
}