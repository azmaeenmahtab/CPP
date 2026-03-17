#include<bits/stdc++.h>
using namespace std;
using ll = long long;\
 
 
int main(){
 
	int t;
	cin >> t;
 
	while(t--){
 
		string s;
 
		cin >> s;
 
		int len = s.size();
 
		int scount = 0, op = 0;
 
		for(int i = 0; i < len; i++){
 
			if(s[i] == 's'){
 
				scount++;
			}
		}
 
		if(scount == len){
 
			cout << 0 << endl;
 
 
		}else{
 
			for(int i = 0; i < len; i++){
 
				if(i == 0){
 
					if(s[i] != 's'){
 
						s[i] = 's';
						op++;
					}
				}
 
				else if(s[i] == 'u'){
 
					if((i+1) <= (len-1)){
 
					if(s[i+1] != 's'){
 
						s[i+1] = 's';
						op++;
						i++;
					}
					}else{
 
						s[i] = 's';
						op++;
					}
				}
			}
 
			cout << op << endl;
 
		}
		// cout << "test" << t << endl; 
	}
}
