#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{

    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Find the single element and return the answer:
    for (auto it : mpp)
    {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

// Optimal Solution
// int getSingleElement(vector<int> &arr) {
//     //size of the array:
//     int n = arr.size();

//     // XOR all the elements:
//     int xorr = 0;
//     for (int i = 0; i < n; i++) {
//         xorr = xorr ^ arr[i];
//     }
//     return xorr;
// }
