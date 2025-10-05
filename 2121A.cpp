#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;

	cin >> t;
	for(int i = 0; i < t; i++){

		int n, s;
		cin >> n >> s;
		int arr[n+1];

		for(int j = 1 ; j <= n; j++){

			cin >> arr[j];
		}
		int left_dis = abs(arr[1] - s);
		int right_dis = abs(arr[n] - s);
		int total_steps = 0;
		if(left_dis < right_dis){

			total_steps = left_dis + abs(arr[1] - arr[n]);

		}else if(right_dis < left_dis){

			total_steps = right_dis + abs(arr[1] - arr[n]);

		}else{

			total_steps = right_dis + abs(arr[1] - arr[n]);

		}

		cout << total_steps << endl;
		
	}
}
