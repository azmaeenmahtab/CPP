#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        int arr[a+1];
        for(int j = 1; j <= a; j++){
            cin >> arr[j];
        }
        int l_ans = 0;
        int r_ans = 0;

        bool flag = false;
        for(int l = 1; l < a && !flag; l++){


            for(int r = l+1; r < a ; r++){
                            int sum1 = 0;
            int sum2 = 0;
            int sum3 = 0;

                for(int m = 1; m <= l; m++){
                    sum1 += arr[m];
                }
                for(int n = l+1 ; n <= r; n++){
                    sum2 += arr[n];
                }
                for(int p = r+1; p <= a; p++){
                    sum3 += arr[p];
                }

                if(sum1%3 == sum2%3 && sum2%3 == sum3%3 && sum1%3 == sum3%3){
                    cout << l << " " << r << endl;
                    flag = true;
                    break;
                }
                else if(sum1%3 != sum2%3 && sum2%3 != sum3%3 && sum1%3 != sum3%3){
                    cout << l << " " << r << endl;
                    flag = true;
                    break;
                }
            }

        

        }

        if(!flag){
            cout << l_ans << " " << r_ans << endl;
        }
    }

}