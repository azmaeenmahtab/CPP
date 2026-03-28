#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
       ll n, s, x;
 
       cin >> n >> s >> x;
 
       vector<ll> nums(n);
 
       int sum = 0;
 
       for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums[i] = x;
        sum += x;
       }
 
       if(sum > s){
 
        cout << "no" << endl;
       }else if(sum == s){
 
        cout << "yes" << endl;
       }else{
 
        int sub = s - sum;
 
        if(sub % x == 0){
 
            cout << "yes" << endl;
        }else{
 
            cout << "no" << endl;
        }
       }
 
    }
 
}
 
