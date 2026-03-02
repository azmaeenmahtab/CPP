#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;

	cin >> t;
	for(int i = 0; i < t; i++){

		int n;
		cin >> n;

		vector<int> teeths(n+1);
		for(int j = 1; j <= n; j++){

        	cin >> teeths[j];																		
		}
		
		bool is_multiple = false;

		for(int k = 1; k <= n && !is_multiple; k++){
			//cout << "outer lopp " << k << endl;
			for(int m = k + 1; m <= n  && !is_multiple; m++){
				// cout << "inner looop  " << m << endl;
				if(teeths[k] == teeths[m]){

					is_multiple = true;
					break; 
				}
			}
		}

		if(!is_multiple){
			cout << "no" << endl;
		}else{
			cout << "yes" << endl;
		}
	}
}
