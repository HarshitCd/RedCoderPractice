#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int &x: v) {
        cin>>x;
        if(x == 1) x++;    
    }

    for(int i = 1; i < n; i++) {
        if(v[i] % v[i-1] == 0) v[i]++;
    }

    for(int x: v) cout<<x<<" ";
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