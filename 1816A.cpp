#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

void solve() {
    int a, b;
    cin>>a>>b;

    cout<<2<<endl;
    cout<<1<<" "<<((b == 1 )? b + 1 : b - 1)<<endl;
    cout<<a<<" "<<b<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}