#include <bits/stdc++.h>
using namespace std;
void rearrangeArray(vector<int> &nums, int pIdx)
{
    int n = nums.size();
    swap(nums[pIdx], nums[n - 1]);

    int pivotValue = nums[n - 1];
    int smallerIdx = -1;
    for (int j = 0; j < n - 1; j++)
    {
        if (nums[j] < pivotValue)
        {
            smallerIdx++;
            swap(nums[smallerIdx], nums[j]);
        }
    }
    swap(nums[smallerIdx + 1], nums[n - 1]);

    cout << "Array after rearranging: ";
    for (int val : nums)
        cout << val << " ";
    cout << endl;
}
int main()
{
    int n, p_idx;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << "Enter index of the pivot to partition around (0 to " << n - 1 << "): ";
    cin >> p_idx;
    if (p_idx >= 0 && p_idx < n)
    {
        cout << "Pivot Value: " << nums[p_idx] << endl;
        rearrangeArray(nums, p_idx);
    }
    else
    {
        cout << "Invalid index!" << endl;
    }
    return 0;
}