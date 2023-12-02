#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, esum = 0, osum = 0, a;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>a;
        (a % 2) ? osum += a : esum += a;
    }

    (esum > osum) ? cout<<"YES\n" : cout<<"NO\n";
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}