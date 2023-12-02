#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    string a, b;
    cin>>a>>b;
    for(int i = 0; i < a.size(); i++) {
        cout<<((a[i] - 0) ^ (b[i] - 0));
    }

    return 0;
}