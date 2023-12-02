#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;

    string ans;
    int j = 0;
    ans += s[0];
    bool flag = true;
    for(int i = 1; i < n; i++) {
        if(!flag) {
            ans += s[i];
            j++;
        }

        if(ans[j] == s[i]) {
            flag ^= 1;
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