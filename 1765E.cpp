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

    int n, a, b;
    cin>>n>>a>>b;
    
    (a <= b) ? cout<<(n / a) + (n % a != 0)<<endl : cout<<1<<endl;

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}