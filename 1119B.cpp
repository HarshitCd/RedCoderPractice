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

    int64_t n, h, ans = 0, sum;
    cin>>n>>h;

    vector<int64_t> bottles(n);
    for(int64_t& x: bottles) {
        cin>>x;
    }

    vector<int64_t> tmp;
    for(int i = 0; i < n; i++) {
        tmp.push_back(bottles[i]);
        sum = 0;

        sort(tmp.rbegin(), tmp.rend());
        for(int j = 0; j < tmp.size(); j += 2) {
            sum += tmp[j];
        }

        if(sum <= h) {
            ans = i + 1;
        } else {
            break;
        }
    }

    cout<<ans;

    return 0;
}