#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, k, c = 0, b;
    cin>>n>>k;

    for(int i = 0; i < n; i++) {
        cin>>b;
        if(b % k != (i + 1) % k) c++;
    }

    if(c == 0) cout<<0;
    else if(c == 2) cout<<1;
    else cout<<-1;
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