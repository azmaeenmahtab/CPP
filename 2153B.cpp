
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if(!(cin>>t)) return 0;
    while(t--){
        long long x,y,z; cin>>x>>y>>z;
        bool ok = true;
        if ( (x & y & ~z) ) ok = false;
        if ( (x & z & ~y) ) ok = false;
        if ( (y & z & ~x) ) ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
