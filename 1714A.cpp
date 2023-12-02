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
    int n, H, M, h, m, min_H = inf, min_M = inf;

    cin>>n>>H>>M;
    while(n--) {
        cin>>h>>m;

        if(m < M) {
            m += 60;
            h--;
        }
        if(h < H) {
            h += 24;
        }

        if(h - H < min_H) {
            min_H = h - H;
            min_M = m - M;
        } else if (h - H == min_H) {
            min_M = min(m - M, min_M);
        }
    }

    cout<<min_H<<" "<<min_M<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}