#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr<<std::endl;

using namespace std;

int main() {

    int n, t, pos = 1;
    bool flag = false;
    cin>>n>>t;

    vector<int> v(n - 1);
    for(int &x: v) cin>>x;

    while(pos <= t) {
        if(pos == t) {
            flag = true;
            break;
        }

        pos = v[pos - 1] + pos;
    }
    
    (flag) ? cout<<"YES" : cout<<"NO";

    return 0;
}