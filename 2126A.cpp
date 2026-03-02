#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;

	cin >> t;
	while(t--){

		int n;
		cin >> n;
		vector<int> arr;
		int i = 0;
		int smallest = 0;
		while(n){

			arr.push_back(n % 10);
			n = n / 10;
			//cout << arr[i] << endl;
			i++;

		}
		int small = arr[0];
		for(int j = 0; j < arr.size(); j++){

			if(arr[j] < small){
				small = arr[j];
			}
		}
		cout << small << endl;
	}
}
