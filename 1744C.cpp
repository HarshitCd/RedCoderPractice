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
    
    int n, fur_g = -inf, ans = 0;
    char c;
    string s;
    cin>>n>>c>>s;

    s += s;
    for(int i = 2 * n - 1; i >= 0; i--) {
        if(s[i] == 'g') fur_g = i;
        if(s[i] == c) ans = max(ans, fur_g - i);
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