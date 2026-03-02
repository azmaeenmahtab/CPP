#include <bits/stdc++.h>
using namespace std;
long long comp_cnt = 0;
void merge(vector<int> &arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> Left(n1), Right(n2);
    for (int i = 0; i < n1; i++)
        Left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        Right[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        comp_cnt++;
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
        arr[k++] = Left[i++];
    while (j < n2)
        arr[k++] = Right[j++];
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int n;
    cout << "Input size N: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    cout << "Comparisons performed: " << comp_cnt << endl;
    return 0;
}