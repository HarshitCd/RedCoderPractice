#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, q, sum = 0, l, r, k, a;
    cin>>n>>q;

    vector<int> preprocess_odd(n + 1);
    for(int i = 0; i < n; i++) {
        cin>>a;
        a %= 2;
        sum += a;
        preprocess_odd[i + 1] += sum; 
    }

    sum %= 2;

    while(q--) {
        cin>>l>>r>>k;

        k %= 2;
        if(k) a = r - l + 1 - (preprocess_odd[r] - preprocess_odd[l - 1]);
        else a = preprocess_odd[r] - preprocess_odd[l - 1];

        a %= 2;
        (sum + a) % 2 ? cout<<"YES\n" : cout<<"NO\n";
    }
    
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}