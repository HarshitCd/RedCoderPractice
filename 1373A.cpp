#include <bits/stdc++.h>
#include <set>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;

    (a < c) ? cout<<1<<" " : cout<<-1<<" ";
    (c / b >= a) ? cout<<-1 : cout<<b;

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