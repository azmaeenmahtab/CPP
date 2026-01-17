#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;

	while(t--){
		// cout << t << endl;

		int n, k;

		cin >> n >> k;

		string s;

		cin >> s;

		bool isPossible = true;

		int low = 1, high = n, count = 0;

		for(int i = low - 1; i < n; i++){

			if(s[i] == '1'){

				count++;

				if(count >= k){

					cout << "NO" << endl;

					isPossible = false;

					break;

				}
			}else{

					count = 0;
				}
		}

		if(isPossible){

		cout << "YES" << endl;

		int arr[n];

		int l = 0;
		int h = 0;

		while(l <= n-1){

			if(s[l] == '1'){

				arr[l] = low;

				low++;
			}

			l++;
			 
		}

		while(h <= n-1){

			if(s[h] == '0'){

				arr[h] = high;
				
				high--;
			}

			h++;
		}


		for(int i = 0; i < n; i++){

			cout << arr[i] << " " ;
		}

		cout << endl;

	}
	}


}
