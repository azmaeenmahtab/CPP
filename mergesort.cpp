#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int low , int mid , int high){

    int i = low;
    int j = mid+1;

    int k = low;
    int temp[high+1];

    while(i <= mid && j <= high){

        if(arr[i] <= arr[j]){

            temp[k] = arr[i];
            i = i + 1;
        }else{

            temp[k] = arr[j];
            j+=1;
        }

        k += 1;
    }

    while(i <= mid){

        temp[k] = arr[i];
        i += 1;
        k += 1;
    }

    while(j <= high){

        temp[k] = arr[j];
        j += 1;
        k += 1;

    }


    for(int i = low; i <= high; i++){

        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int low, int high){

    if(low < high){

        int mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);

        Merge(arr, low, mid , high);
    }
}





int main(){


    int arr[10] = {90, 80, 50, 40, 20, 60, 10, 30, 88, 33};

    MergeSort(arr, 0, 9);



    for(int i = 0; i <= 9; i++){

        cout << arr[i] << " ";
    }
}

