#include <bits/stdc++.h>
using namespace std;
 
 
int main() {

    vector<int> nums = {80, 10, 50, 20, 100, 20, 25, 35 ,30, 40};
    
    for(int i = 1; i < nums.size(); i++){

        int key = nums[i];

        for(int j = i - 1; j >= 0; j--){

            if(nums[j] > key){

                int temp = nums[j];

                nums[j] = key;

                nums[j+1] = temp;
            }

        }

         
    }


    for(int i = 0 ; i < nums.size(); i++){

        cout << nums[i] << " " << endl;
     }
        
} 
