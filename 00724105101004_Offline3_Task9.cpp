#include <bits/stdc++.h>
using namespace std;
int merge_ops = 0;
void merge_func(vector<int> &A, int left, int mid, int right)
{
    merge_ops++;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while (i < n1)
        A[k++] = L[i++];
    while (j < n2)
        A[k++] = R[j++];
}
void mSort(vector<int> &A, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mSort(A, left, mid);
        mSort(A, mid + 1, right);
        merge_func(A, left, mid, right);
    }
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    mSort(A, 0, n - 1);
    cout << "Total merge operations: " << merge_ops << endl;
    return 0;
}