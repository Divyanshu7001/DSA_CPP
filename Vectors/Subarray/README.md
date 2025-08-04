# Subarray

A **subarray** is a contiguous part of an array. For an array of size `n`, a subarray is defined by a starting index `i` and an ending index `j` where `0 ≤ i ≤ j < n`. Subarrays maintain the order of elements and do not skip any elements between `i` and `j`.

## 1. Printing All Subarrays

To print all subarrays of an array, use two nested loops:
```cpp
for (int start = 0; start < n; ++start) {
    for (int end = start; end < n; ++end) {
        // Print elements from arr[start] to arr[end]
        for (int k = start; k <= end; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
```
This prints every possible contiguous subarray.

## 2. Maximum Subarray Sum (LeetCode #53)

The **Maximum Subarray Sum** problem asks for the largest sum of any contiguous subarray. The optimal solution uses Kadane's Algorithm:

```cpp
int maxSubArray(vector<int>& nums) {
    int max_sum = nums[0], curr_sum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        curr_sum = max(nums[i], curr_sum + nums[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
```
This runs in O(n) time.

## Variants of Subarray Problems on LeetCode

- **Minimum Size Subarray Sum** (#209): Find the minimal length of a contiguous subarray with sum ≥ target.
- **Maximum Product Subarray** (#152): Find the contiguous subarray with the largest product.
- **Subarray Sum Equals K** (#560): Count the number of subarrays that sum to `k`.
- **Contiguous Array** (#525): Find the maximum length of a contiguous subarray with equal number of 0 and 1.
- **Longest Subarray of 1's After Deleting One Element** (#1493): Find the longest subarray of 1's after deleting one element.

These problems explore different properties and constraints on subarrays.