#include <bits/stdc++.h>
#include <set>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    set<int> a;
    int b;
    for(int i = 0; i < 4; i++) {
        cin>>b;
        a.insert(b);
    }

    cout<<4 - a.size();
    return 0;
}