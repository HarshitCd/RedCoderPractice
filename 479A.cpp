#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    int a, b, c;
    cin>>a>>b>>c;
    
    vector<int> v(4);
    v[0] = a * b * c;
    v[1] = (a + b) * c;
    v[2] = a * (b + c);
    v[3] = a + b + c;

    cout<<max(v[0], max(v[1], max(v[2], v[3])));

    return 0;
}