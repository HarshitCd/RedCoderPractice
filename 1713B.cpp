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
    cin>>n;

    vector<int> a(n + 2);

    for(int i = 1; i <= n; i++) cin>>a[i];

    int preLen = 1;
    while (preLen < n && a[preLen] <= a[preLen + 1])
        preLen++;

    int sufLen = 1;
    while (sufLen < n && a[n-sufLen] >= a[n-sufLen + 1])
        sufLen++;
    
    (preLen + sufLen >= n) ? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}