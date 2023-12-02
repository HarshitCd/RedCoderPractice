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
    int a, b, c, val1, val2;
    cin>>a>>b>>c;

    val1 = abs(a - 1);
    val2 = abs(b - c) + abs(c - 1);
    (val1 < val2) ? cout<<1 : (val2 < val1) ? cout<<2 : cout<<3;
    
    cout<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}