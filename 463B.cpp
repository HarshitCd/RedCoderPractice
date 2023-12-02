#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr << std::endl;
#define FOR(i, s, n) for (uint64_t i = s; i < n; ++i)

using namespace std;

int main() {

    int n, pylon, ans = 0;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>pylon;
        ans = max(pylon, ans);
    }

    cout<<ans;

    return 0;
}