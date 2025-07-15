#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int i;

    // Store initial in temp
    int temp[k];
    for (i = n-k+1; i < n; i++)
    {
        temp[i] = arr[i];
    }
    // Shift the remaining
    for (i = 0; i < k; i++)
    {
        arr[]= arr[i];
        arr[i] = temp[i];
    }
    // Add the temp elemnts
    // for (i = n - k; i < n; i++)
    // {
    //     arr[i] = temp[i - (n - k)];
    // }
    for (i = 0; i< n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}