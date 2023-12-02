#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>

#define inf 1e9+7
#define DEBUG(x) std::cerr << #x << ": " << x << std::endl;
#define DEBUG2(v) std::cerr << #v << ": "; for (auto x: v) std::cerr << x << " "; std::cerr << std::endl;
#define FOR(i, s, n) for (uint64_t i = s; i < n; ++i)

using namespace std;

int main() {

    int n, unique_vals = 0, fail_safe = 0;
    cin>>n;

    vector<int> v(n);
    map<int, int> m;
    for(int& x: v) {
        cin>>x;
        m[x]++;
    }

    for(auto x: m) {
        if(x.second == 1) {
            unique_vals++;
        } 
        if(x.second > 2) {
            fail_safe++;
        }
    }

    if(unique_vals % 2 == 0) {
        cout<<"YES\n";
        unique_vals /= 2;
        for(int x: v) {
            if(unique_vals && m[x] == 1) {
                cout<<"B";
                unique_vals--;
            } else {
                cout<<"A";
            }
        }
    } else if(fail_safe) {
        fail_safe = 1;
        cout<<"YES\n";
        unique_vals /= 2;
        for(int x: v) {
            if(unique_vals && m[x] == 1) {
                cout<<"B";
                unique_vals--;
            } else if(fail_safe && m[x] > 2) {
                cout<<"B";
                fail_safe--;
            } else {
                cout<<"A";
            }
        }
    } else {
        cout<<"NO";
    }

    return 0;
}