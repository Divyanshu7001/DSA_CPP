## Majoriy Element

Leetcode #169: **Majority Element**

## Problem Statement

Given an array of size `n`, find the majority element. The majority element is the element that appears more than `n/2` times. You may assume that the majority element always exists in the array.

## Example

#### Example 1

```plaintext
Input: nums = [3,2,3]
Output: 3
Explanation: The majority element is 3, which appears 2 times (more than n/2).
```

#### Example 2

```plaintext
Input: nums = [2,2,1,1,1,2,2]
Output: 2
Explanation: The majority element is 2, which appears 4 times (more than n/2).
```

#### Example 3

```plaintext
Input: nums = [1]
Output: 1
Explanation: The majority element is 1, which appears 1 time (more than n/2).
```

## Constraints

```plaintext
1 <= nums.length <= 5 * 10^4
-10^9 <= nums[i] <= 10^9
```

## Approach

The **Boyer-Moore Voting Algorithm** is an efficient way to find the majority element in linear time and constant space. The algorithm works by maintaining a count of the current candidate for majority element and adjusting it based on the elements in the array.

## Boyer-Moore Voting Algorithm

```cpp
int majorityElement(vector<int>& nums) {
    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }
    return candidate;
}
```
