#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int set[n+1];
 
		for(int i = 1; i <= n; i++){
 
			cin >> set[i];
		}
 
		int highest = set[1];
 
		for(int i = 1; i <= n ; i++){
 
			
 
				if(set[i] > highest){
 
					highest = set[i];
 
				}
			
		}
 
		cout << highest << endl;
		  
		
 
		 
	}
}
