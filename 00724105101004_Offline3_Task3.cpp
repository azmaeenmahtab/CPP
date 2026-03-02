#include <bits/stdc++.h>
using namespace std;
int totalSwaps = 0;
int partition(vector<int> &arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            totalSwaps++;
        }
    }
    swap(arr[i + 1], arr[r]);
    totalSwaps++;
    return i + 1;
}
void quickSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> data(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> data[i];
    quickSort(data, 0, size - 1);
    cout << "Sorted: ";
    for (int x : data)
        cout << x << " ";
    cout << "\nNumber of swaps required: " << totalSwaps << endl;
    return 0;
}