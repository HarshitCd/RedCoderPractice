#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;

    if(a > b && a > c) {
        if(b < c) swap(b, c);
    }   
    else if(b > c) {
        swap(a, b);
        if(b < c) swap(b, c);
    } 
    else {
        swap(a, c);
        if(b < c) swap(b, c);
    }

    int ans = 0;
    if(a || b || c) {
        if(a) {
            a--;
            ans++;
        }
        if(b) {
            b--;
            ans++;
        }
        if(c) {
            c--;
            ans++;
        }
    }

    if((a && b) || (a && c) || (b && c)) {
        if(a && b) {
            a--; b--;
            ans++;
        }
        if(c && a) {
            c--; a--;
            ans++;
        }
        if(b && c) {
            b--; c--;
            ans++;
        }
    }

    if(a && b && c) {
        ans++;
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