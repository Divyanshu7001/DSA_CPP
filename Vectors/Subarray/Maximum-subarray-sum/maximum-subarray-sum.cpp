#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = INT_MIN;

    // Brute Force
    // T.C=O(n^2)
    for (int st = 0; st < vec.size(); st++)
    {
        int currSum = 0;
        for (int end = st; end < vec.size(); end++)
        {
            currSum += vec[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum;

    // Kadane's Algorithm
    // T.C=O(n)
    int currSum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        currSum += vec[i];
        maxSum = max(maxSum, currSum);

        // Reset happens after max checking to handle the edge case of all negative elements
        if (currSum < 0)
            currSum = 0;
    }
    cout << maxSum;

    return 0;
}