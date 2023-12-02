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

int main() {

    int t, n;
    cin>>t;

    while(t--) {
        cin>>n;
        if(n % 2) FOR(i, n) cout<<1<<" "; 
        else {
            cout<<1<<" "<<3<<" ";
            FOR(i, n - 2) cout<<2<<" ";
        }
        cout<<endl;
    }

    return 0;
}