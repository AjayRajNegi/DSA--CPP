#include <bits/stdc++.h>
using namespace std;

void majorityElement(vector<int> &arr, int n)
{
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    majorityElement(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}