#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

	int t;
	cin >> t;
	while(t--){

		int n;
		cin >> n;

		string s;
		cin >> s;

		int ones = 0;

		for(int i = 0; i < s.length(); i++){
			if(s[i] == '1'){
				ones++;
			}
		}
		bool flag = false;
		// cout<< " intial ones" << ones << endl;

		if(ones == (n/2) && ones != 0 && n%2 == 0)
		{
			cout << ones <<  endl;
		}
		else
		{
			for(int i = 0; i < s.length();)
			{
				int zeros = 0;

				int starting;
				int ending;

				if(s[i] == '0')
				{
					int j = i;

					while(s[j] != '1' && j < s.length())
					{
						zeros++;
						j++;
					}

					starting = i;
					ending = j - 1;

					// int lenOfzeros = ending - starting + 1;
					// cout << starting << "strt" << endl;
					// cout << ending << "end" << endl;
				}

				if(zeros == 1 && zeros == n)
				{
					cout << 1 << endl;
					flag = true;
				}else
				{
					bool beforeone = false;
					bool afterone = false;
					if(starting >= 1)
					{
						if(s[starting-1] == '1')
						{
							beforeone = true;
						}
						
					}

					if(ending < (s.length()-1))
					{
						if(s[ending+1] == '1')
						{
							afterone = true;
						}
						
					}

					if(beforeone && afterone){

						int available = zeros - 2;
						if(available <= 3 && available){
							ones += 1;
						}else{

							ones = ones + (available/2);
						}
					}
					else if(beforeone || afterone){

						// if(zeros >= 3 ){
						int available = zeros - 1;
						if(available <= 3 && available){
							ones += 1;
						}else{

							ones = ones + ((zeros-1)/2);
						}
						// cout << "ones counted " << ones << endl;

						// }else {
						// 	ones = ones + (zeros/2);
						// }
					}else
					{
						ones = ones + (zeros/2);
						// cout << "ones counted " << ones << endl;

					}

					i = ending+1;

				}

				i++;

			}

			if(!flag){
				cout << ones << endl ;

			}

		}

	}
}
