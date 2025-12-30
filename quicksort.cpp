#include <bits/stdc++.h>
using namespace std;

int Partition(int l, int h, vector<int> &arr){

    int pivot = arr[l];

    int i = l, j = h;

    while(i < j){

        while(arr[i] <= pivot && i <= h - 1){

            i++;
        }

        while(arr[j] > pivot && j >= l + 1){

            j--;
        }

        if(i < j){

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[l] , arr[j]);

    return j;
}

void QuickSort(int l , int h, vector<int> &arr){

    if(l < h){

    int j = Partition(l, h, arr);

    QuickSort(l , j-1, arr);

    QuickSort(j+1 , h, arr);


}


}
 
int main() {

    vector<int> nums = {80, 10, 50, 20, 100, 20, 25, 35 ,30, 40};
    int l = 0, h = nums.size()-1;

    QuickSort(l, h, nums);


    for(int i = 0; i <= h; i++){

        cout << nums[i] << " " ;
    }
    
    
        
        
} 
