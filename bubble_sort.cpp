#include <bits/stdc++.h>
using namespace std;
 
 
int main() {

    vector<int> nums = {80, 10, 50, 20, 100, 20, 25, 35 ,30, 40};
    
    for(int i = 1; i < nums.size() ; i++){

         
        for(int j = 0; j < (nums.size() -  i); j++){


            if(nums[j] > nums[j + 1]){

                swap(nums[j] , nums[j + 1]);
            }
         
    }
}

    for(int i = 0 ; i < nums.size(); i++){

        cout << nums[i] << " " << endl;
     }
        
        
        
} 
