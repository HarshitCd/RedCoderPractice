#include <bits/stdc++.h>
#include <set>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    string s;
    cin>>s;

    int ans = 0;
    if(s == "^") {
        cout<<1<<endl; 
        return;
    }
    if(s[0] == '_') {
        s = '^' + s;
        ans = 1;
    }

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '_' && (i + 1 == s.size() || s[i + 1] == '_')) ans++;
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