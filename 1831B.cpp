#include <bits/stdc++.h>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    vector<vecotr<int>> v(2, vector<int>(n));

    for(int &x: a) cin>>x;
    for(int &x: b) cin>>x;

    for(int i = 0; i < 2; i++) {
        for(int &x: v[i]) cin>>x;
    }

    vector<map<int, int>> m(2);

    for(int j = 0; j < 2; j++) {
        int tmp = v[j][0], k = 1;
        for(int i = 1; i < n; i++) {
            if(tmp == v[k][i]) k++;
            else {
                m[j][tmp] = max(m[j][tmp], k);
                tmp = v[j][i];
                k = 1;
            }
        }
        m[j][tmp] = max(m[j][tmp], k);
    }

    
    int ans = 0;
    for(int i = 1; i <= 2*n; i++) {
        ans = max(m[0][i] + m[1][i], ans);
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