#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, k, max_ent = -inf, ans = -1;
    cin>>n>>k;

    vector< pair<int, int> > v(n);

    for(int i = 0; i < n; i++) {
        cin>>v[i].second;
        v[i].second += i;
    }

    for(int i = 0; i < n; i++) {
        cin>>v[i].first;

        if(v[i].second > k) v[i].first = -inf;
        if(max_ent < v[i].first) {
            ans = i + 1;
            max_ent = v[i].first;
        }
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