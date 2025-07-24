# LeetCode 485 - Max Consecutive Ones

## Problem Statement

Given a binary array `nums`, return the maximum number of consecutive 1's in the array.

### Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two 1's form a sequence of length 2.
Then the last three 1's form a sequence of length 3.
The maximum is 3.

### Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2




## Constraints

- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`.

---

## Approach

- Traverse the array from left to right.
- Maintain a `count` of consecutive 1s.
- If you see a `1`, increment the count.
- If you see a `0`, reset the count to 0.
- Keep track of the maximum count seen so far using a `max_ele` variable.

Time Complexity: **O(n)**  
Space Complexity: **O(1)**

---

## Language

- C++

---

✅ Solution implemented in [max_consecutive_ones.cpp](./max_consecutive_ones.cpp)
