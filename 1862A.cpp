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
    int n, m, k = 0;
    cin>>n>>m;
    
    vector<vector<char>> carpet(m, vector<char>(n));
    string vika = "vika";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>carpet[j][i];
        }
    }

    for(int i = 0; i < m && k != vika.size(); i++) {
        for(int j = 0; j < n && k != vika.size(); j++) {
            if(carpet[i][j] == vika[k]) {
                k++;
                break;
            }
        }
    }

    cout<<(k == vika.size() ? "YES\n" : "NO\n");
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}