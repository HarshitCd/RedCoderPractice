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

    int n, a, c = 0, i = 0;
    map<int, int> m;
    cin>>n;

    while(i++ < n) {
        cin>>a;
        if(m[a]++ == 0) c++;
    }

    cout<<((c < 3) ? (n / 2) + 1 : n)<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}