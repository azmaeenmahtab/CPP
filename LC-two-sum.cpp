class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

    int start, end;
    bool isfound = false;

    for(int i = 0; i < arr.size() && !isfound; i++){
        for(int j = i+1; j < arr.size() && !isfound; j++){

            if(arr[i] + arr[j] == target){

                start = i;
                end = j;
                isfound = true;
                break;
            }
        }
    }

    return {start, end};



    }
};
