#include <bits/stdc++.h>
using namespace std;
int findMax1(vector<int> &nums)
{
    int onecount = 0;
    int maxcount = 0;
    if (nums.size() == 1)
        return nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            onecount++;
        }
        if (nums[i] == 0)
        {
            maxcount = max(maxcount, onecount);
            onecount = 0;
        }
    }

    maxcount = max(maxcount, onecount);

    return maxcount;
}

int main()
{
    int N = 5;
    vector<int> arr = {1, 4, 2, 0, 5};
    int num = findMax1(arr);
    cout << num;
    return 0;
}