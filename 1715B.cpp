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
    int64_t n, k, b, s;
    cin>>n>>k>>b>>s;

    if(k * b > s) {
        cout<<-1<<endl;
        return;
    }

    vector<uint64_t> v(n);
    v[n - 1] = k * b;
    s -= v[n - 1];

    if(s > (k - 1) * n) {cout<<-1<<endl; return;}
    int i = 0;
    while(s - (k - 1) > 0) {
        v[i++] += k - 1;
        s -= (k - 1);
    }
    v[i] += s;

    for(uint64_t x: v) cout<<x<<" ";
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