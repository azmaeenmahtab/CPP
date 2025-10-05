#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;

	cin >> t;
	while(t--){

		int n, m, count = 0;
		cin >> n >> m;


		vector<int> arr(m);

		for(int i = 0; i < m; i++){

			cin >> arr[i];
		}

		//checking subarray
		int ans = n - arr[m-1] + 1;

		for(int j = 1; j < m; j++){

			if(arr[j] == 1){
				ans = 1;
			}
		}

		cout << ans << endl;
	}
}
