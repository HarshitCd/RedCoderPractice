#include <bits/stdc++.h>
#include <set>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

ll diff(ll l){
	ll diff=0,mini=l%10,maxi=l%10;
 
	while(l!=0){
		mini = min(mini, l%10);
		maxi = max(maxi, l%10);
		l/=10;
	}
	return abs(mini-maxi);
}
 
void solve(){
	ll dif=0, result=0, l, r;
    cin>>l>>r;
    ll number = l;
 
    for(int i=l; dif != 9 && i<=r; i++){
        if(diff(i) > dif){
            dif = diff(i);
            number=i;
        }
    }
	
	cout<<number<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}