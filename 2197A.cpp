#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){

	int t;
	cin >> t;

	while(t--){

		ll x;
		cin >> x;


		if(x % 9 == 0){


			int count = 0;

			for(ll i = x; i <= (x+81); i++){

				ll sum = 0;


				ll y = i;
				ll z = i;

				while(y){
					ll rem = y % 10;
					sum += rem;
					y = y/10;
				}

				if((z - sum) == x){
					count++;
				}

			}
			cout << count << endl;

		}else{

			cout << 0 << endl;
		}

	}
}
