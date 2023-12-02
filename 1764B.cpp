#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    
    int n, max_val, hcf, a;
    cin>>n>>a;
    hcf = max_val = a;

    for(int i = 1; i < n; i++) {
        cin>>a;
        max_val = max(max_val, a);
        hcf = gcd(hcf, a);
    }

    cout<<(max_val / hcf)<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}