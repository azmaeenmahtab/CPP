#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[high];
    cout << "Current Pivot: " << pivot << " (Range: " << low << "-" << high << ")" << endl;
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}
void qs(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);
        qs(v, low, pi - 1);
        qs(v, pi + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    qs(v, 0, n - 1);
    return 0;
}