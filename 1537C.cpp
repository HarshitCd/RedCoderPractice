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

void solve() {
    int n, min_diff = inf, min_index = -1;
    cin>>n;

    vector<int> heights(n);
    for(int& height: heights) {
        cin>>height;
    }

    sort(heights.begin(), heights.end());

    if(n == 2) {
        cout<<heights[0]<<" "<<heights[1]<<endl;
        return;
    }

    for(int i = 1; i < n; i++) {
        if(heights[i] - heights[i - 1] < min_diff) {
            min_diff = heights[i] - heights[i - 1];
            min_index = i;
        }
    }

    for(int i = min_index; i < n + min_index; i++) {
        cout<<heights[i % n]<<" ";
    }
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