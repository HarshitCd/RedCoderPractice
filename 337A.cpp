#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    int n, m, ans = inf;
    cin>>n>>m;

    vector<int> v(m);
    for(int &x: v) cin>>x;

    sort(v.begin(), v.end());

    for(int i = 0; i <= m - n; i++) {
        ans = min(ans, v[i + n - 1] - v[i]);
    }

    cout<<ans;

    return 0;
}