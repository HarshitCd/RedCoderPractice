#include <bits/stdc++.h>
#include <set>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n;
    bool flag = true;
    string s;
    cin>>n>>s;

    for(int i = 1; i < n; i += 3) {
        if(i + 1 >= n) {flag = false; break;}
        else if(s[i] != s[i + 1]) {flag = false; break;}
    }

    (flag) ? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}