#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    int n;
    double sum = 0, x;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>x;
        sum += x;
    }

    cout<<sum / n;

    return 0;
}