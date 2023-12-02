#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr << std::endl;
#define FOR(i, s, n) for (uint64_t i = s; i < n; ++i)

using namespace std;

void solve() {
    int64_t n, ans = 0, val, min_val = inf, neg_count = 0;
    bool adj = false;
    cin>>n;

    for(int64_t i = 0; i < n; i++) {
        cin>>val;

        if(val < 0) {
            neg_count++;
            val *= -1;
        }

        ans += val;
        min_val = min(val, min_val);
    }

    cout<<(neg_count % 2 ? ans - 2 * min_val : ans)<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}