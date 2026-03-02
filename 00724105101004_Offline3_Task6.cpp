#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &A, int low, int high)
{
    int pivot = A[high];
    int count = 0;
    for (int k = low; k < high; k++)
    {
        if (A[k] < pivot)
            count++;
    }
    cout << "Pivot: " << pivot << " -> Count of smaller elements: " << count << endl;
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    return (i + 1);
}
void runQuickSort(vector<int> &A, int low, int high)
{
    if (low < high)
    {
        int pi = partition(A, low, high);
        runQuickSort(A, low, pi - 1);
        runQuickSort(A, pi + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter number of integers: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    runQuickSort(A, 0, n - 1);
    return 0;
}