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
    int n, i, c = 0;
    string s, pairs, prev = "##";
    cin>>n>>s;

    bool possible = false;
    map<string, int> m;
    for(i = 0; i < n - 1; i++) {
        pairs = s.substr(i, 2);
        
        if(pairs != prev) {++m[pairs]; c = 1;}
        else if (c != 1) ++m[pairs];
        else c = 0;
        
        if(m[pairs] == 2) break;

        prev = pairs;
    }
    

    (i == n - 1) ? cout<<"NO\n" : cout<<"YES\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}