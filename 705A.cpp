#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    int n;
    cin>>n;
    --n;

    string ans = "I hate ";
    bool flag = true;
    while(n--) {
        ans += "that I ";
        ans += (flag) ? "love " : "hate ";
        flag ^= 1;
    }

    cout<<ans<<"it";
    return 0;
}