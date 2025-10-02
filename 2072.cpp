#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;

	cin >> t;
	for(int i = 0; i < t; i++){

		int n, k , p;
		cin >> n >> k >> p;

		int abs_k = abs(k);

		if(abs_k % p == 0 && (abs_k / p) > 0 && (abs_k / p) <= n) {

			cout << (abs_k / p) << endl;

		}else if(abs_k % p != 0 && (abs_k / p) > 0 && ((abs_k / p) + 1) <= n){

			cout << ((abs_k / p) + 1) << endl;

		}else if(abs_k / p == 0 && abs_k != 0){

			cout << 1 << endl;

		}else if(abs_k == 0){

			cout << 0 << endl;
		}else{

			cout << -1 << endl;
		}
		
	}
}
