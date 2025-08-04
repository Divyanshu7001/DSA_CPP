## Pair Sum
Given an sorted array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

- You may assume that each input would have **exactly one solution**, and you may not use the same element twice.
- You can return the answer in any order.

---

### Examples

**Example 1**

```
Input:  nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] == 9, so we return [0, 1].
```

**Example 2**

```
Input:  nums = [3, 2, 4], target = 6
Output: [1, 2]
```

**Example 3**

```
Input:  nums = [3, 3], target = 6
Output: [0, 1]
```

---

### Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- **Only one valid answer exists.**

### Approach

To find a target sum efficiently in a sorted array, we use binary search. Binary search works by repeatedly dividing the search interval in half:

**Initialize Pointers:**  
Set two pointers, `left` at the start and `right` at the end of the array.

**Iterative Search:**  
While left is less than or equal to right:

- Calculate the current sum according to the two pointers: `current_sum = nums[left] + nums[right]`.
- If `current_sum` equals the target sum, return `[left, right]` (target found).
- If `current_sum` is less than the target, move `left++`.
- If `current_sum` is greater than the target, move `right--`.

**Result:**  
If the loop ends without finding the target, the target sum is not present in the array.

**Why Binary Search?**  
Binary search reduces the time complexity from O(n) (linear search) to O(log n), making it much faster for large, sorted arrays.