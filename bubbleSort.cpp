#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            int temp = 0;
            int didSwap = 0;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
            if (didSwap == 0)
            {
                break;
            }
        }
    }
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
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}