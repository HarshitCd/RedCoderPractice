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
    
    int n, ans = 0, i = 0;
    char c = '1';
    string s;

    cin>>n>>s;

    while(i < n && s[i++] == '0');
    while(i < n) {
        if(s[i] != c) ++ans;
        c = s[i++];
    }

    cout<<ans<<endl;

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}