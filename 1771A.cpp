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
    
    int64_t n, low = inf, high = -inf, x;
    cin>>n;

    map<int64_t, int64_t> m;

    for(int i = 0; i < n; i++) {
        cin>>x;
        m[x]++;

        low = min(low, x);
        high = max(high, x);
    }

    if(low == high) cout<<n * (n - 1)<<endl;
    else cout<<2 * (m[low] * m[high])<<endl;

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}