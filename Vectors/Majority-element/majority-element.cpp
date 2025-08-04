#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    // Sorting and frequency counting algorithm 
    //T.C = (O(nlogn))
    sort(nums.begin(), nums.end());
    int curr = nums[0], cnt = 1, n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == curr)
        {
            cnt++;
        }
        else
        {
            curr = nums[i];
            cnt = 1;
        }
        if (cnt > n / 2)
        {
            cout << curr << endl;
            break;
        }
    }

    // Moore's Algorithm
    // T.C = O(n)
    int ans = nums[0], freq = 1, n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == ans)
            freq++;
        else
            freq--;

        if (freq == 0)
        {
            ans = nums[i];
            freq = 1;
        }
    }

    int count = 0;

    for (int val : nums)
    {
        if (val == ans)
            count++;
    }

    if (count > n / 2)
    {
        cout << ans;
        return 0;
    }
    return -1;
}