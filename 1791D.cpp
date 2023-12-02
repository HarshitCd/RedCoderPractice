#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int n, ans = 0, cur = 0, tmp;
    string s;
    map<char, int> m1, m2;

    cin>>n>>s;

    for(char c: s) {
        if(m1[c] == 0) ans++;
        m1[c]++;
    }

    cur = ans;
    for(int i = 0; i < n && ans != 52; i++) {
        if(--m1[s[i]] == 0) cur--;
        if(m2[s[i]]++ == 0) cur++;
        
        ans = max(ans, cur);
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