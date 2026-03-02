#include <bits/stdc++.h>
using namespace std;
int partition_and_print(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    int loc = i + 1;
    swap(arr[loc], arr[end]);
    cout << "Pivot " << pivot << " settled at index: " << loc << endl;
    return loc;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int p = partition_and_print(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Elements: ";
    for (int k = 0; k < n; k++)
        cin >> arr[k];
    quickSort(arr, 0, n - 1);
    cout << endl;
    return 0;
}