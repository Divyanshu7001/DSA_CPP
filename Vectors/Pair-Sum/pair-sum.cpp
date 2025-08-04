#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec = {3, 2, 4};
    int target = 6;
    sort(begin(vec),end(vec));
    int left = 0, right = vec.size() - 1;

    while (left <= right)
    {
        int currSum = vec[left] + vec[right];
        if (currSum == target)
        {
            cout << left << "," << right;
            return 0;
        }
        else if (currSum < target)
        {
            left++;
        }
        else
            right--;
    }
    
    return -1;
}