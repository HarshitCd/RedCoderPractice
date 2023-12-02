#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;

using namespace std;

void solve() {
    int n, x;
    int64_t sum = 0, overflow;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>x;
        sum += x;
    }

    overflow = sum % n;
    cout<<overflow * (n - overflow)<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}