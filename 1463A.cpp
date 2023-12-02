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
    int a, b, c, total_hp;
    cin>>a>>b>>c;

    total_hp = a + b + c;

    cout<<((total_hp % 9 == 0 && min(a, min(b, c)) >= total_hp / 9) ? "YES\n" : "NO\n");
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}