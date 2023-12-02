#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7

using namespace std;

int main() {

    int n, m, cur = 1, a;
    uint64_t ans = 0;

    cin>>n>>m;

    for(int i = 0; i < m; i++) {
        cin>>a;

        if(a < cur) {
            ans += n - cur + 1;
            cur = 1;
        }

        ans += a - cur;
        cur = a;
    }

    cout<<ans;

    return 0;
}