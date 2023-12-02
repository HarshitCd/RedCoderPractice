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
    
    int n, toggle = 1, i, a = inf, b;
    bool ans = true;
    cin>>n;

    for(int i = 0; i < n; i++, a = b) {

        cin>>b;
        if(!(toggle && a >= b)) {
            toggle = 0;
        }

        if(!toggle && a <= b) {
            continue;
        } else if(!toggle) ans = false;
    }

    (ans) ? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}