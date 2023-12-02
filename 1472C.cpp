#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;
#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void solve() {
    uint64_t n, ans = 0;
    cin>>n;

    vector<uint64_t> v(n), scores(n);
    for(uint64_t& x: v) {
        cin>>x;
    }

    for(int i = n - 1; i >= 0; i--) {
        scores[i] += v[i] + ((i + v[i]) < n ? scores[i + v[i]] : 0);
        ans = max(ans, scores[i]);
    }

    cout<<ans<<endl;

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}