#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;
#define FOR(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void solve() {
    int n, a, q;
    cin>>n>>a>>q;

    string notifications;
    cin>>notifications;

    int grauntee = a, maybe = a;
    bool maybe_flag = false;
    
    if(grauntee == n) {
        cout<<"YES\n";
        return;
    }

    for(char notification: notifications) {
        if(notification == '+') {
            grauntee += 1;
            maybe += 1;
        } else {
            grauntee -= 1;
        }

        if(grauntee == n) {
            cout<<"YES\n";
            return;
        }

        if(maybe == n) {
            maybe_flag = true;
        }
    }

    cout<<(maybe_flag ? "MAYBE" : "NO")<<endl;

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}