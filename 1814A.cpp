#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    ll n, k;
    cin>>n>>k;

    (n % 2 == 0 || k % 2 == 1) ? cout<<"YES\n" : cout<<"NO\n";

}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}