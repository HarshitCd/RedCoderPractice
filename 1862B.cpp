#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr << std::endl;
#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> b(n);
    for(int& x: b) {
        cin>>x;
    }

    vector<int> a;
    a.push_back(b[0]);

    for(int i = 1; i < b.size(); i++) {
        if(b[i - 1] > b[i]) {
            a.push_back(1);
        }
        a.push_back(b[i]);
    }

    cout<<a.size()<<endl;
    for(int x: a) {
        cout<<x<<" ";
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