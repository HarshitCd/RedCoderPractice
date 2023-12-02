#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    int n, a;
    cin>>n;
    while(n--) {
        cin>>a;

        if(a == 1) {
            cout<<1<<endl; 
            continue;
        } else if(a % 2) {
            cout<<-1<<endl; 
            continue;
        }

        vector<int> v(a);
        for(int i = 2; i <= a; i += 2) {
            v[i - 2] = i;
        } 
        for(int i = 1; i <= a; i += 2) {
            v[i] = i;
        } 

        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}