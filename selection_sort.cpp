#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> nums = {10, 20, 80, 30, 50, 40};

    for(int i = 0 ; i < nums.size() - 1; i++){

        int minIdx = i;

        for(int j = i + 1; j < nums.size(); j++){

            if(nums[j] < nums[minIdx]){

                minIdx = j ;

             }
        }

        if(nums[i] != nums[minIdx]){

            int temp = nums[i];

            nums[i] = nums[minIdx];

            nums[minIdx] = temp;

            // swap(nums[i], nums[minIdx]);
        }


    }



    for(int i = 0; i < nums.size() ; i++){

        cout << nums[i] << " " << endl;
    }
 }
