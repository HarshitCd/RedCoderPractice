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
    int n, a, ans = inf;
    cin>>n;

    int l, count;
    map<int, vector<int>> m;

    for(int i = 0; i < n; i++) {
        cin>>a;
        m[a].push_back(i);
    }

    for(auto x: m) {
        l = -1;
        count = 0;

        x.second.push_back(n);
        for(int y: x.second) {
            if(y - l > 1) count++;
            l = y;
        }

        ans = min(ans, count);
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