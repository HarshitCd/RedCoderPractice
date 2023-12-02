#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, a;
    bool flag = false;
    cin>>n;

    vector<int> l(n);
    for(int i = 0; i <n; i++) {
        cin>>a;
        if(a < n) l[a]++;
        else flag = true;
    }

    if(flag) {
        cout<<"NO\n";
        return;
    }
    for(int i = 1; i < n; i++) {
        if(l[i - 1] < l[i]) {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}