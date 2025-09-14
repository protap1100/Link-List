#include <bits/stdc++.h>
using namespace std;
void rec(int arr[], int n, int i = 0)
{
    if (i >= n)
    {
        return;
    }
    rec(arr, n, i + 1);
    cout << arr[i] << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rec(arr, n);
    return 0;
}