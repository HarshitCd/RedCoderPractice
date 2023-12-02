#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;

using namespace std;

uint64_t gcd(uint64_t a, uint64_t b) {
    return !b ? a : gcd(b, a % b);
}

void solve() {
    uint64_t a, b, c, d, x, y, ans = 0;
    cin>>a>>b>>c>>d;

    x = a * d;
    y = b * c;

    if(x == y) ans = 0;
    else if (x == 0 || y == 0) ans = 1;
    else {
        uint64_t hcf = gcd(x, y);
        if(x / hcf != 1) ans++;
        if(y / hcf != 1) ans++;
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