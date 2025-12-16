#include <bits/stdc++.h>
using namespace std;
 
 
int main() {


    vector<int> nums = {80, 10, 50, 20, 100, 20, 25, 35 ,30, 40};
    
    for(int i = 1; i < nums.size(); i++){

        int key = nums[i];

        int j = i - 1; 

        while(j >= 0 && nums[j] > key){

            nums[j + 1] = nums[j];

            j--;

        }

        nums[j + 1] = key; 

         
    }


    for(int i = 0 ; i < nums.size(); i++){

        cout << nums[i] << " " << endl;
     }
        
} 
