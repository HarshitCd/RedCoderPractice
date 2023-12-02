#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;

using namespace std;

bool check_same_plane(int a, int b, int c) {
    return ((a >= b && a >= c) || (a < b && a < c));
}

void solve() {
    
    int64_t ans = 1;
    pair<int64_t, int64_t> A, B, C;
    cin>>A.first>>A.second;
    cin>>B.first>>B.second;
    cin>>C.first>>C.second;

    if(check_same_plane(A.first, B.first, C.first)) {
        ans += min(abs(A.first - B.first), abs(A.first - C.first));
    }
    if(check_same_plane(A.second, B.second, C.second)) {
        ans += min(abs(A.second - B.second), abs(A.second - C.second));
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