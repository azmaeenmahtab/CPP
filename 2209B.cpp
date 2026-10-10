#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> nums(n);

        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }

        if(nums.size() == 1){

            cout << 0 << endl;

        }else{

        for(ll i = 0; i < n-1; i++){

            ll greaterNums = 0;
            ll smallerNums = 0;

            for(ll j = i + 1; j < n; j++){

                if(nums[j] < nums[i]){

                    smallerNums++;
                }else if(nums[j] > nums[i]){
                    greaterNums++;
                }

            }

            if(smallerNums >= greaterNums){
                cout << smallerNums << ' ';
            }else{

                cout << greaterNums << ' ' ;
            }
        }

        cout << 0 << endl;

    }
    }

    return 0;
}
