#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;
 
        vector<ll> A, B;
        for (ll v = a; ; v /= x) { A.push_back(v); if (v == 0) break; }
        for (ll v = b; ; v /= x) { B.push_back(v); if (v == 0) break; }
 
        ll ans = LLONG_MAX;
        for (int i = 0; i < (int)A.size(); i++)
            for (int j = 0; j < (int)B.size(); j++)
                ans = min(ans, (ll)i + j + llabs(A[i] - B[j]));
 
        cout << ans << "\n";
    }
}
