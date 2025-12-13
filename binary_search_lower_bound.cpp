#include <bits/stdc++.h>
using namespace std;
 
 
int main() {


    vector<int> nums = {10, 20, 20, 20, 20, 40};
    int target = 50  ;

     int low = 0; 
        int high = nums.size() - 1;
        int ans = nums.size();

         while(low <= high){

            int mid = (low + high) / 2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid -1;

            }else{

                low = mid + 1;
            }
        }


        cout << "lower bound index " << ans << " lower bound value " << nums[ans]  << endl;
             
}
