#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, k, a, b;
    cin>>n>>k;

    int x = 0, y = 0;
    
    for(int i = 0; i < n; i++) {
        cin>>a>>b;
        
        if(a == k) x++;
        if(b == k) y++;
    }
    
    (x && y)? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }
 
    return 0;
}