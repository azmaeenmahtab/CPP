#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
    cin>>t;
    while(t--){
    	
    	int n;
      cin >> n;

      string s;
      cin >> s;

      

      int ones = 0;

      for(int i = 0; i < n; i++){

          if(s[i] == '1'){

            ones++;
          }
          
        
      }

      if(ones == 0){

        cout << n << endl;
      }else{

        int zeros = n - ones;

        cout << (zeros * (ones + 1)) + (ones * (ones - 1)) << endl;
      }

	}
}
