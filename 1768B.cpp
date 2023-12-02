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

    int n, k, par_sort = 1;
    cin>>n>>k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        par_sort += (par_sort == v[i]);
    }

    --par_sort;
    cout<<(n - par_sort) / k + ((n - par_sort) % k != 0)<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}