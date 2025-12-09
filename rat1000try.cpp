#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
         
         int n, k;

         cin >> n >> k;
         vector<int> a(n);
         for(int i = 0; i < n ; i++){

            cin >> a[i];
         }
         int length_of_a = a.size();
         vector<int> b(k);
         for(int i = 0; i < k; i++){

            cin >> b[i];
         }

         sort(a.begin(), a.end(), greater<>());

         sort(b.begin(), b.end());



         for(int i = 0; i < k; i++ ){
                        // cout << "discount " << b[i] << endl;
                                    // cout << "size of vector " << length_of_a << endl;



            if(b[i] == 1){
               
               // cout << "removed " << a[0] << "  " << endl;


               a.erase(a.begin());
               length_of_a--;



            }else if(b[i] > 1 && b[i] <= length_of_a){

               length_of_a -= b[i];

               int temp = b[i] - 1;
               // cout << "removed " << a[temp] << "  " << endl;

               a.erase(a.begin() + temp);


               // i = temp - 1;

            }

         }

         int sum = 0;

         for(int x = 0; x < a.size(); x++){

            // cout << a[x] << "  ";
            sum+= a[x];
         }

         cout << sum << endl;


      }
}
