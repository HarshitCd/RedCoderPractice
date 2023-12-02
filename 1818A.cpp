#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, k, ans;
    cin>>n>>k;

    string s, me;
    map<string, int> m;

    cin>>me;
    m[me]++;

    for(int i = 1; i < n; i++) {
        cin>>s;
        m[s]++;
    }

    cout<<m[me]<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}