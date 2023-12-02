#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    ll n, k;
    cin>>n>>k;

    if(k <= (n / 2) + (n % 2)) cout<<2 * k - 1;
    else cout<<2 * (k - (n / 2) - (n % 2));

    return 0;
}