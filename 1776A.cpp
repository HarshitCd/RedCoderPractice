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
    int n, c = 0;
    cin>>n;

    vector<int> v(n + 2);
    v[n + 1] = 1440;
    for(int i = 1; i <= n; i++) cin>>v[i];

    for(int i = 1; i < n + 2; i++) {
        c += (v[i] - v[i - 1]) / 120;
        if(c >= 2) break;
    }

    (c >= 2) ?  cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}