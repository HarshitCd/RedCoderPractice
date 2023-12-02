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

void swap_vals(int64_t &a, int64_t &x) {

    a += x;
    x = a - x;
    a = a - x;
    
}

void solve() {

    int64_t n, m, ans;
    cin>>n>>m;

    vector<int64_t> v(n + m - 1);
    FOR(i, n + m - 1) {
        cin>>v[i];
    }   
    cin>>ans;

    sort(v.rbegin(), v.rend());
    FOR(i, n - 1) ans += v[i];

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