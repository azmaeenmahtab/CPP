#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){


		int n;
		cin >> n;
		int p[n+1], pos[n+1];

		for(int j = 1; j <= n; j++){

			cin >> p[j];

			pos[p[j]] = j;
		}

		int L = pos[n], R = pos[n];

		bool ok = true;

		for(int k = n-1; k >= 1; --k){

			if(pos[k] == L-1){

				L = pos[k];
			}else if(pos[k] == R+1){

				R = pos[k];
			}else{
				ok = false;
				break;
			}
		}

		if(ok){
			cout << "yes" << endl;

		}else{

			cout << "no" << endl;
		}
	}
}
