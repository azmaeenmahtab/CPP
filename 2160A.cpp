#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int set[n];
 
		for(int i = 0; i < n; i++){
 
			cin >> set[i];
		}
 
		for(int i = 0; i < n ; i++){
 
			for(int j = i + 1; j < n ; j++){
 
				if(set[i] > set[j]){
 
					swap(set[i], set[j]);
				}
			}
		}
		// cout << "sorted " << endl;
		// for(int j = 0 ; j < n; j++){
 
		// 	cout << set[j] << " " ;
		// }
 
		bool isfound = false;
		int mex;
			for(int i = 0; i <= set[n-1]; i++){
 
				bool ispresent = false;
	
				for(int j = 0; j < n; j++){
 
					if(set[j] == i){
 
						ispresent = true;
					}
				}
 
				if(!ispresent){
 
					isfound = true;
					cout << i << endl;
					break;
				}
			}
 
	    // cout << endl;
		if(!isfound){
 
			cout <<  set[n-1] + 1 << endl;
		}
 
 
 
 
 
 
 
 
 
 
 
		 
	}
}
