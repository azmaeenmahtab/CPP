#include <bits/stdc++.h>
using namespace std;
void solve_median(vector<int> &a, vector<int> &b)
{
    vector<int> c;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    while (i < a.size())
        c.push_back(a[i++]);
    while (j < b.size())
        c.push_back(b[j++]);
    cout << "Merged Sorted Array: ";
    for (int x : c)
        cout << x << " ";
    cout << endl;
    int n = c.size();
    double med = 0;
    if (n % 2 == 1)
    {
        med = c[n / 2];
    }
    else
    {
        med = (c[n / 2 - 1] + c[n / 2]) / 2.0;
    }
    cout << "Median of combined array: " << med << endl;
}
int main()
{
    int n1, n2;
    cout << "Size of 1st sorted array: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    cout << "Size of 2nd sorted array: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    solve_median(a, b);
    return 0;
}