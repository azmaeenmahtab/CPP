#include <bits/stdc++.h>
using namespace std;
int comp_count = 0;
int partition_func(vector<int> &A, int start, int end)
{
    int pivot = A[end];
    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        comp_count++;
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[end]);
    return (i + 1);
}
void myQuickSort(vector<int> &A, int start, int end)
{
    if (start < end)
    {
        int p_index = partition_func(A, start, end);
        myQuickSort(A, start, p_index - 1);
        myQuickSort(A, p_index + 1, end);
    }
}
int main()
{
    int n;
    cout << "Enter number of elements (N): ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    myQuickSort(A, 0, n - 1);
    cout << "Sorted Array: ";
    for (int x : A)
        cout << x << " ";
    cout << endl;
    cout << "Total Comparisons: " << comp_count << endl;
    return 0;
}
