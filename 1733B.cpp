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
    
    int n, x, y, cp = 2, a, b;
    cin>>n>>x>>y;

    if(x < y) swap(x, y);
    a = x; b = y; --n;

    if(b || !a || n % a != 0) {
        cout<<-1<<endl;
        return;
    }

    for(a = x; a <= n; a += x, cp += x) 
        for(int i = 1; i <= x; i++) cout<<cp<<" ";
    
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