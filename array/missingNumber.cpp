#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int N)
{
    int sum = (N * (N + 1)) / 2;

    // Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N; i++)
    {
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    int arr[] = {1, 4, 2, 0, 5};
    int num = missingNumber(arr, N);
    cout << num;
    return 0;
}