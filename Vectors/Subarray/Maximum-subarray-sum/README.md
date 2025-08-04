# Maximum Subarray Sum

Leetcode Problem #53

## Problem Statement

You are given an integer array `nums`. Your task is to find the contiguous subarray (containing at least one number) which has the largest sum and return that sum.

## Example

#### Example 1

```plaintext
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
```

#### Example 2

```plaintext
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
```

#### Example 3

```plaintext
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
```

**Constraints:**

```plaintext
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
```

---

**Maximum Subarray Sum** is a classic problem that can be solved efficiently using Kadane's Algorithm.

## Approach

- **Kadane's Algorithm:**
  - Start with two variables: `currentSum` (to track the sum of the current subarray) and `maxSum` (to track the maximum sum found so far).
  - Iterate through the array:
    - At each element, add it to `currentSum`.
    - If `currentSum` becomes less than 0, reset `currentSum` to 0. This is because a negative sum will not help in forming a maximum sum subarray in the future.
    - Update `maxSum` if `currentSum` is greater than `maxSum`.
  - **Edge Case:** If all elements are negative, the above logic would always reset `currentSum` to 0 and `maxSum` would remain 0. To handle this, check reset condition happens after max checking to ensure that at least one element is considered in the maximum sum calculation.

---

## Pseudocode

```plaintext
Initialize max_sum = 0
Initialize current_sum = 0

For each num in nums[1:]:
    current_sum = current_sum + num
    max_sum = max(max_sum, current_sum)

    //Reset happens after max checking to handle the edge case of all negative elements
    If current_sum < 0:
        current_sum = 0      # Reset current_sum if it is negative

Return max_sum
```

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
