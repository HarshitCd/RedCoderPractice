#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, sum = 0, mul = 1, ans = 0, x;
    cin>>n;

    while(n--) {
        cin>>x;

        sum += x;
        mul *= x;
    }

    if(sum < 0) {
        sum *= -1;

        x = sum / 2 + sum % 2;
        mul *= (x % 2) ? -1 : 1;
        ans += x;
    }

    if(mul < 0) ans++;
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