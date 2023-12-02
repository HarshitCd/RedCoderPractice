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
    int n, ans = 1, i = 2;
    cin>>n;

    while(i * i <= n) {
        if(!(n % i)) {
            ans = n / i;
            break;
        }
        i++;
    }

    cout<<ans<<" "<<n - ans<<endl;
    
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}