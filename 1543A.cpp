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
    int64_t a, b, excitement, steps;
    cin>>a>>b;

    if (a == b) {
        cout<<"0 0\n";
        return;
    }

    excitement = abs(a - b);
    steps = min(a % excitement, excitement - a % excitement);

    cout<<excitement<<" "<<steps<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}