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
    int n;
    string r1, r2;
    bool ans = true;

    cin>>n>>r1>>r2;
    for(int i = 0; i < n; i++) {
        if(!((r1[i] == 'R' && r2[i] == 'R') || 
                (r1[i] == 'G' || r1[i] == 'B') 
                    && (r2[i] == 'G' || r2[i] == 'B'))) {ans = false; break;}
    }

    (ans)? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}