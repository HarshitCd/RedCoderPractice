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

void solve(map<uint64_t, bool>& cubes) {
    uint64_t n;
    cin>>n;

    for(uint64_t i = 1; i <= 10000 && n >= i * i * i; i++) {
        if(cubes[n - i * i * i]) {
            cout<<"YES\n";
            return;
        }
    }

    cout<<"NO\n";
}

int main() {

    map<uint64_t, bool> cubes;
    for(uint64_t i = 1; i <= 10000; i++) {
        cubes[i * i * i] = true;
    }

    int t;
    cin>>t;

    while(t--) {
        solve(cubes);
    }

    return 0;
}