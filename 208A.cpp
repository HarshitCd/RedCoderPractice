#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#define ll long long
#define inf 1e9+7

using namespace std;

int main() {

    string s, dub_step = "WUB", delimiter = "";
    int c = 0, n;
    cin>>s;

    n = s.size();

    for(int i = 0; i < n; i++) {
        if(s[i] == dub_step[0] && (i + 1) < n && s[i + 1] == dub_step[1] 
            && (i + 2) < n && s[i + 2] == dub_step[2]) {
                if(c) delimiter = " ";
                i += 2;
        } else {
            cout<<delimiter + s[i];
            delimiter = "";
            c++;
        }
    
    }

    return 0;
}